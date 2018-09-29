# CustomizedInfluxDB-v0.8.8
`CustomizedInfluxDB-v0.8.8` is open source custom-made based on influxdb version0.8.8.
And the major purpose of this repository is to collect the source code of InfluxDB version0.8.8 and its dependency libraries. Because that this version of InfluxDB is too old to build binary via source code due to some libraries directories are changed or upgraded. 
Moreover, I record the build processes as below:

## Repository structure

* InfluxDB Source Code Directory: `CustomizedInfluxDB-v0.8.8/github.com/influxdb/influxdb`
* Others are dependencies libraries

## Build Processes 

* Step 1: Install packages needed for compiling as root
```text
sudo -s
apt-get install gawk mercurial bzr protobuf-compiler flex bison valgrind g++ make autoconf libtool libz-dev libbz2-dev curl rpm build-essential git wget libgflags-dev
```
* Step 2: `gvm` installation
```text
bash < <(curl -s -S -L https://raw.githubusercontent.com/moovweb/gvm/master/binscripts/gvm-installer)
```
* Step 3: Initialize the GVM environments variables
```text
source ~/.gvm/scripts/gvm
```
* Step 4: `golang` installation via `gvm`
```text
gvm install go1.3
```
* Step 5: Set default version of golang
```text
gvm use go1.3 --default
```
* Step 6: Copy repo to golang environments
```text
mkdir -p $GOPATH/src
mkdir -p $GOPATH/bin
cp -rf marmot-influxdb-v0.8.8/* $GOPATH/src/
```
* Step 7: Make Build
```text
cd $GOPATH/src/github.com/influxdb/influxdb
make build
```
