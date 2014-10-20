Pod::Spec.new do |s|
  s.name = 'XuiteSDK'
  s.version = '1.0.0'
  s.summary = 'A short description of XuiteSDK.'
  s.license = {"type"=>"Copyright", "text"=>"Copyright © 2005 - 2014 Internet Service by Xuite"}
  s.authors = {"linuscys"=>"linus.cys@gmail.com"}
  s.homepage = 'http://api.xuite.net'
  s.description = 'A long description of XuiteSDK.'
  s.requires_arc = true
  s.source = {}

  s.platform = :ios, '7.0'
  s.ios.platform             = :ios, '7.0'
  s.ios.preserve_paths       = 'ios/XuiteSDK.framework'
  s.ios.public_header_files  = 'ios/XuiteSDK.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/XuiteSDK.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/XuiteSDK.framework'
end
