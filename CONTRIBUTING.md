# 📋 Гайд для контрибьюшена

Спасибо за интерес к нашему проекту! Вот несколько правил для гладкой работы.

## 🎯 Как внести свой вклад

### 1. Fork репозитория
```bash
# На GitHub нажмите "Fork"
```

### 2. Клонируйте ваш форк
```bash
git clone https://github.com/ВАШ_НИКНЕЙМ/MyProjects.git
cd MyProjects
```

### 3. Создайте ветку для вашей фичи
```bash
git checkout -b feature/cool-feature
# или для бага:
git checkout -b fix/bug-description
```

### 4. Сделайте ваши изменения

**Для Python:**
```bash
cd Python
# Убедитесь, что виртуальное окружение активировано
python -m venv venv
source venv/bin/activate  # или venv\Scripts\activate на Windows
pip install -r requirements.txt
# Внесите изменения
python -m pytest tests/  # Запустите тесты
```

**Для C++:**
```bash
cd C++
mkdir build && cd build
cmake ..
cmake --build .
# Внесите изменения
# Перестройте проект
```

### 5. Коммитьте изменения

Используйте **Conventional Commits**:
```bash
git commit -m "feat(python): add new data parser"
git commit -m "fix(cpp): memory leak in allocator"
git commit -m "docs: update installation guide"
```

**Типы коммитов:**
- `feat`: новая фича
- `fix`: исправление бага
- `docs`: изменения в документации
- `style`: форматирование кода (пробелы, запятые, точки с запятой, etc)
- `refactor`: рефакторинг кода без изменения функционала
- `perf`: улучшение производительности
- `test`: добавление или обновление тестов
- `chore`: обновления зависимостей, конфигов, etc

**Примеры:**
```bash
git commit -m "feat(python): add Calculator class"
git commit -m "fix(cpp): handle null pointer exception"
git commit -m "docs(python): update README with examples"
git commit -m "refactor(cpp): simplify algorithm"
```

### 6. Запушьте изменения
```bash
git push origin feature/cool-feature
```

### 7. Создайте Pull Request (PR)

1. Перейдите на GitHub
2. Нажмите "New Pull Request"
3. Выберите вашу ветку
4. Напишите описание изменений
5. Нажмите "Create Pull Request"

## 📝 Стиль кода

### Python
- Следуйте [PEP 8](https://pep8.org/)
- Используйте docstrings для функций и классов
- Линтер: `pylint` или `flake8`
- Форматер: `black` или `autopep8`

```python
def calculate_sum(a: int, b: int) -> int:
    """Складывает два числа.
    
    Args:
        a: Первое число
        b: Второе число
    
    Returns:
        Сумма чисел
    """
    return a + b
```

### C++
- Следуйте C++17 стандарту
- Используйте CMake для сборки
- Используйте meaningful переменные
- Добавляйте комментарии для сложного кода

```cpp
// Хорошо
int CalculateSum(int a, int b) {
    return a + b;
}

// Плохо
int cs(int a, int b) {
    return a + b;
}
```

## ✅ Чек-лист перед PR

- [ ] Я прочитал документацию
- [ ] Код следует стилю проекта
- [ ] Я добавил тесты для новых фич
- [ ] Все тесты проходят
- [ ] Я обновил документацию
- [ ] Коммит-сообщения понятные и следуют Conventional Commits
- [ ] Нет конфликтов с main веткой

## 🐛 Сообщение об ошибке

Если вы нашли баг:

1. Проверьте, что такой issue еще не создан
2. Создайте новый issue
3. Включите:
   - Описание проблемы
   - Шаги для воспроизведения
   - Ожидаемое поведение
   - Фактическое поведение
   - Версия OS, Python/C++
   - Screenshots (если применимо)

## 💡 Предложение фичи

Для новых идей:

1. Откройте issue с меткой `enhancement`
2. Подробно опишите фичу
3. Объясните зачем она нужна
4. Включите примеры использования

## 📞 Вопросы?

Откройте issue с вопросом или создайте discussion. Мы рады помочь!

---

**Спасибо за вклад в развитие проекта! 🚀**

