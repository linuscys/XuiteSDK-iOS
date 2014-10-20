Pod::Spec.new do |s|
  s.name = 'XuiteSDK'
  s.version = '1.0.0'
  s.summary = 'A short description of XuiteSDK.'
  s.license = {"type"=>"Copyright", "text"=>"Copyright © 2005 - 2014 Internet Service by Xuite"}
  s.authors = {"linuscys"=>"linus.cys@gmail.com"}
  s.homepage = 'http://api.xuite.net'
  s.description = '                   A longer description of XuiteSDK in Markdown format.

                   * Think: Why did you write this? What is the focus? What does it do?
                   * CocoaPods will be using this to generate tags, and improve search results.
                   * Try to keep it short, snappy and to the point.
                   * Finally, don't worry about the indent, CocoaPods strips it!
'
  s.requires_arc = true
  s.source = {}

  s.platform = :ios, '7.0'
  s.ios.platform             = :ios, '7.0'
  s.ios.preserve_paths       = 'ios/XuiteSDK.framework'
  s.ios.public_header_files  = 'ios/XuiteSDK.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/XuiteSDK.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/XuiteSDK.framework'
end
