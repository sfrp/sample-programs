source 'https://rubygems.org'

V = '1.4.0'
LOCAL_SFRP_PATH = File.expand_path('../../sfrp', __FILE__)

if File.directory?(LOCAL_SFRP_PATH)
  gem 'sfrp', V, :path => LOCAL_SFRP_PATH
else
  gem 'sfrp', V, :github => 'sfrp/sfrp'
end
