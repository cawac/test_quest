cmake_minimum_required(VERSION 3.21)
project(test_quest)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_quest Journal.h Book.h Shelf.h Bookcase.h Publication.h Library.h Reader.h Admin.h Librarian.h main.cpp abstract_Publication.h)
