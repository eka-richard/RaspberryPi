FROM gcc

WORKDIR /usr/src

COPY SimpleApp/*.cpp SimpleApp/*.h ./

run g++ -std=c++11 -o SimpleApp main.cpp

CMD ./SimpleApp