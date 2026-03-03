# 📚 C++ Projects - Learning Journey

Мои C++ проекты организованы **по датам обучения**.

Каждый день - новая папка с разными проектами!

## 📅 Проекты по датам

### 📌 2026-03-02 (День 1)

**Папка:** `2026-03-02/`

Проекты в этот день:
- `test/` - Basic class example
- `calculator/` - Simple calculator

**Как запустить:**
```bash
cd 2026-03-02/test
mkdir build && cd build
cmake ..
cmake --build .
.\bin\Test.exe  # Windows
./bin/Test      # Linux/Mac
```

**Подробнее:** Смотрите `2026-03-02/README.md`

---

## 🎯 Структура проекта

Каждый день - это папка с датой (YYYY-MM-DD):

```
C++/
├── 2026-03-02/          ← День 1
│   ├── test/
│   │   ├── src/
│   │   ├── include/
│   │   └── CMakeLists.txt
│   ├── calculator/
│   │   ├── src/
│   │   ├── include/
│   │   └── CMakeLists.txt
│   └── README.md
│
├── 2026-03-03/          ← День 2
│   ├── game/
│   │   ├── src/
│   │   ├── include/
│   │   └── CMakeLists.txt
│   └── README.md
│
└── README.md            ← Этот файл
```

---

## 🚀 Как добавить новый проект?

### Новый проект в текущий день

```bash
cd C++\2026-03-02

# Создаёте папку для проекта
mkdir my-new-project\src
mkdir my-new-project\include

# Копируете CMakeLists.txt из другого проекта
copy test\CMakeLists.txt my-new-project\CMakeLists.txt

# Редактируете CMakeLists.txt - меняете имя проекта
# Пишете код в src/ и include/
```

### Новый день (новый набор проектов)

```bash
cd C++

# Создаёте папку с датой (YYYY-MM-DD)
mkdir 2026-03-03\project1\src
mkdir 2026-03-03\project1\include
mkdir 2026-03-03\project2\src
mkdir 2026-03-03\project2\include

# Создаёте CMakeLists.txt для каждого проекта
# Создаёте README.md для дня (скопируйте шаблон)
```

---

## 📖 Быстрая инструкция

### Собрать и запустить проект

```bash
cd C++\2026-03-02\test      # Выбираете день и проект
mkdir build
cd build
cmake ..
cmake --build .
.\bin\Test.exe              # Windows
```

### Добавить новый файл в проект

```bash
# Добавляете .h файл в include/
# Добавляете .cpp файл в src/
# Обновляете CMakeLists.txt если новых .cpp файлов

# Пересобираете:
cd build
cmake ..
cmake --build .
```

### Отправить на GitHub

```bash
cd C:\MyProjects
git add .
git commit -m "feat(cpp): добавил новые проекты в 2026-03-03"
git push
```

---

## 💡 Почему такая структура?

✅ **По датам** - видно когда вы что учили
✅ **Проекты в папках** - легко найти нужный
✅ **Каждый проект независим** - свой CMakeLists.txt
✅ **На GitHub красиво** - видна прогресс обучения
✅ **Легко расширять** - просто добавляете новые дни

---

## 🎓 Как использовать

1. **Смотрите по датам** - какие проекты в какой день
2. **Переходите в папку дня** - `cd 2026-03-02`
3. **Выбираете проект** - `cd test`
4. **Собираете** - `mkdir build && cd build && cmake .. && cmake --build .`
5. **Запускаете** - `.\bin\Test.exe`

---

**Ваш путь обучения видна на GitHub!** 🚀

Последнее обновление: 2026-03-03


