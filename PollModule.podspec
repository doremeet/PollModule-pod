# run `pod lib lint PollModule.podspec' to ensure this is a
# valid spec before submitting.

Pod::Spec.new do |s|
  s.name             = 'PollModule'
  s.version          = '0.0.1'
  s.summary          = 'PollModule - poll intergration for IBandPlayerSDK'
  s.homepage              = "http://www.iband.io"
  s.description      = <<-DESC
    poll intergration for IBandPlayerSDK - need to add here more description.
                       DESC
  s.platform              = :ios                       
  s.license               = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2017 IBand, Inc. All rights reserved.
      LICENSE
  }
  s.author           = { "Yogev Barber" => "yogev@iband.io" }
  s.source           = { :http => "https://github.com/doremeet/PollModule-pod/blob/v#{s.version}/PollModule.zip" }  
  s.vendored_frameworks   = 'PollModule.framework'
  s.ios.deployment_target = '8.0'
  s.requires_arc          = true
  s.dependency 'IBandPlayerSDK', '~> 0.3.6'
  s.dependency 'AFNetworking', '~> 3.0'
end