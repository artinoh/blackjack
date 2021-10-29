cmake_minimum_required(VERSION 3.20)
project(blackjack)

set(CMAKE_CXX_STANDARD 14)

add_executable(blackjack main.cpp Blackjack.cpp Blackjack.h Card.cpp Card.h Deck.cpp Deck.h HumanPlayer.cpp HumanPlayer.h DealerPlayer.cpp DealerPlayer.h Player.cpp Player.h)
