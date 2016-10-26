desc 'build all'
task :test do
  sh 'bundle install --path=./vendor/bundle'
  cd 'AVR' do
    cd 'Blink' do
      sh 'rake'
    end
    cd 'BlinkWithTimer' do
      sh 'rake'
    end
  end
  cd 'PC' do
    cd 'PointAccum' do
      sh 'rake'
    end
  end
end
