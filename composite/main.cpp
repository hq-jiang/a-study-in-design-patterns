#include "composite.h"

int main() {
  auto newspaper = new Newspaper;
  auto heading = new Heading;
  auto news = new News;
  auto news_weather = new NewsWeather;
  auto news_politics = new NewsPolitics;
  auto ending = new Ending;
  newspaper->Add(heading);
  newspaper->Add(news);
  news->Add(news_weather);
  news->Add(news_politics);
  newspaper->Add(ending);
  newspaper->Print();
}
