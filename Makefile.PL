use 5.014002;
use ExtUtils::MakeMaker;
use inc::Module::Install;

# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'Wurfl',
    VERSION_FROM      => 'lib/Wurfl.pm', # finds $VERSION
    PREREQ_PM         => {}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/Wurfl.pm', # retrieve abstract from module
       AUTHOR         => 'Andrea Guzzo <aguzzo@prod.lhr1.booking.com>') : ()),
    LIBS              => ['-lwurfl'], # e.g., '-lm'
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => '-I.', # e.g., '-I. -I/usr/include/other'
	# Un-comment this if you add C files to link with later:
    # OBJECT            => '$(O_FILES)', # link all the C files too
);
if  (eval {require ExtUtils::Constant; 1}) {
  # If you edit these definitions to change the constants used by this module,
  # you will need to use the generated const-c.inc and const-xs.inc
  # files to replace their "fallback" counterparts before distributing your
  # changes.
  my @names = ({name=>"WURFL_CACHE_PROVIDER_DOUBLE_LRU", macro=>"1"},
              {name=>"WURFL_CACHE_PROVIDER_LRU", macro=>"1"},
              {name=>"WURFL_CACHE_PROVIDER_NONE", macro=>"1"},
              {name=>"WURFL_ENGINE_TARGET_HIGH_ACCURACY", macro=>"1"},
              {name=>"WURFL_ENGINE_TARGET_HIGH_PERFORMANCE", macro=>"1"},
              {name=>"WURFL_ERROR_ALREADY_LOAD", macro=>"1"},
              {name=>"WURFL_ERROR_CANT_LOAD_CAPABILITY_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_CANT_LOAD_VIRTUAL_CAPABILITY_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_CAPABILITY_GROUP_MISMATCH", macro=>"1"},
              {name=>"WURFL_ERROR_CAPABILITY_GROUP_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_CAPABILITY_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_DEVICE_ALREADY_DEFINED", macro=>"1"},
              {name=>"WURFL_ERROR_DEVICE_HIERARCHY_CIRCULAR_REFERENCE", macro=>"1"},
              {name=>"WURFL_ERROR_DEVICE_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_EMPTY_ID", macro=>"1"},
              {name=>"WURFL_ERROR_FILE_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_ERROR_INPUT_OUTPUT_FAILURE", macro=>"1"},
              {name=>"WURFL_ERROR_INVALID_CAPABILITY_VALUE", macro=>"1"},
              {name=>"WURFL_ERROR_INVALID_HANDLE", macro=>"1"},
              {name=>"WURFL_ERROR_INVALID_PARAMETER", macro=>"1"},
              {name=>"WURFL_ERROR_UNEXPECTED_END_OF_FILE", macro=>"1"},
              {name=>"WURFL_ERROR_UNKNOWN", macro=>"1"},
              {name=>"WURFL_ERROR_USERAGENT_ALREADY_DEFINED", macro=>"1"},
              {name=>"WURFL_ERROR_VIRTUAL_CAPABILITY_NOT_FOUND", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_CACHED", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_CATCHALL", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_CONCLUSIVE", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_EXACT", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_HIGHPERFORMANCE", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_NONE", macro=>"1"},
              {name=>"WURFL_MATCH_TYPE_RECOVERY", macro=>"1"},
              {name=>"WURFL_OK", macro=>"1"});
  ExtUtils::Constant::WriteConstants(
                                     NAME         => 'Wurfl',
                                     NAMES        => \@names,
                                     DEFAULT_TYPE => 'IV',
                                     C_FILE       => 'const-c.inc',
                                     XS_FILE      => 'const-xs.inc',
                                    );

}
else {
  use File::Copy;
  use File::Spec;
  foreach my $file ('const-c.inc', 'const-xs.inc') {
    my $fallback = File::Spec->catfile('fallback', $file);
    copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
  }
}

license 'perl';
install_script 'script/wurfld.pl';
