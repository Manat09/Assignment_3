cmake_minimum_required(VERSION 3.20)
project(Assignment_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment_3 main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h CheckingAccount.cpp CheckingAccount.h TrustAccount.cpp TrustAccount.h I_Printable.cpp I_Printable.h Redistribution.cpp Redistribution.h)
