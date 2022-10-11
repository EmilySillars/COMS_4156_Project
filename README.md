# Matchmaking API
## Build and Run
### Building
Build command is of the form

**`bazel build //package-name:build-target-name`**

For example,

    bazel build //hello-world-pkg:hello-world
### Running
Executable files are located in bazel-bin like so

**`bazel-bin/package-name/executable-name`**

For example, to run hello world, do

    bazel-bin/hello-world-pkg/hello-world
### Testing
Test command is of the form

**`bazel test --test_output=all //package-name:test-target-name`**

For example,

    bazel test --test_output=all //testing:hello_test

## Repo Structure

    └── COMS_4156_Project
       ├── hello-world-pkg
       │   ├── BUILD
       │   ├── hello-world.cc
       │   ├── hello-greet.cc
       │   └── hello-greet.h
       ├── hello-world-lib-pkg
       │   ├── BUILD
       │   ├── hello-time.cc
       │   └── hello-time.h
       ├── testing
       │   ├── BUILD
       │   └── hello_test.cc
       └── WORKSPACE

## Install Bazel
**Installing Bazel on Ubuntu 22.04 (what worked for me)**

    sudo apt install npm
    sudo npm install -g @bazel/bazelisk

General Install Instructions:
https://bazel.build/install
## Extra Notes
Tutorials I read to make this repo:
https://bazel.build/start/cpp
http://google.github.io/googletest/quickstart-bazel.html

Extra Resources I skimmed or thought might be helpful later:
https://bazel.build/build/style-guide
https://bazel.build/tutorials/cpp-use-cases
http://google.github.io/googletest/primer.html
http://google.github.io/googletest/gmock_for_dummies.html
https://qiangbo-workspace.oss-cn-shanghai.aliyuncs.com/2018-12-05-gtest-and-coverage/PlainGoogleQuickTestReferenceGuide1.pdf