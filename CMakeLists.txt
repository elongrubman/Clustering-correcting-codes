cmake_minimum_required(VERSION 3.15)
project(clustering_correcting_codes)

set(CMAKE_CXX_STANDARD 14)

add_executable(clustering_correcting_codes main.cpp encoded_strand_binary.h includes.h errorIdentiﬁcationInCluster.h simulator.h)