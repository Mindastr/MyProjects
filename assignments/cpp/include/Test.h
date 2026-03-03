//
// Created by Mindastr on 02.03.2026.
//
// This file is part of MyProjects.
// Copyright (c) 2026 Mindastr. All rights reserved.
//

#ifndef MYPROJECTS_TEST_H
#define MYPROJECTS_TEST_H

#include <iostream>
#include <string>

/**
 * @brief Test класс для демонстрации лучших практик
 *
 * Этот класс показывает как правильно оформить код:
 * - Документирование с Doxygen
 * - Правильное именование переменных
 * - Инкапсуляция данных
 */
class Test {
public:
    /**
     * @brief Конструктор по умолчанию
     */
    Test();

    /**
     * @brief Параметризованный конструктор
     * @param name Имя человека
     * @param age Возраст
     * @param weight Вес
     */
    Test(const std::string& name, int age, double weight);

    /**
     * @brief Выводит информацию о человеке
     */
    void displayInfo() const;

    /**
     * @brief Геттер для имени
     * @return Имя человека
     */
    std::string getName() const;

    /**
     * @brief Геттер для возраста
     * @return Возраст человека
     */
    int getAge() const;

    /**
     * @brief Геттер для веса
     * @return Вес человека
     */
    double getWeight() const;

private:
    std::string name_;      ///< Имя человека
    int age_;              ///< Возраст в годах
    double weight_;        ///< Вес в килограммах
};

#endif // MYPROJECTS_TEST_H

