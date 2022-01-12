cmake_minimum_required(VERSION 3.21)
project(test_quest)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_quest abstract_Publication.h Journal.h Book.h Shelf.h Wardrobe.h Publication.h Library.h Reader.h Admin.h Librarian.h)
