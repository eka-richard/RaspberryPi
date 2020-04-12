FROM gcc

WORKDIR /usr/src

COPY SimpleApp/*.cpp SimpleApp/*.h ./

run g++ -std=c++11 main.cpp -o SimpleApp -pthread

CMD ./SimpleApp