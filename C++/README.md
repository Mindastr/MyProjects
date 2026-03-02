# MyProjects - C++ Learning Project

Учебный проект на C++ для изучения языка и лучших практик.

## 📁 Структура проекта

```
MyProjects/
├── src/          ← Ваши .cpp файлы
├── include/      ← Ваши .h файлы
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## 🔧 Как собрать и запустить

### Windows

```powershell
mkdir build
cd build
cmake ..
cmake --build .
.\bin\MyProjects.exe
```

### Linux/macOS

```bash
mkdir build
cd build
cmake ..
cmake --build .
./bin/MyProjects
```

## 📝 Как добавить свой код

1. Создайте `.h` файл в папке `include/`
2. Создайте `.cpp` файл в папке `src/`
3. Отредактируйте `src/Test.cpp` - добавьте свой код туда или создайте новые файлы
4. Обновите `CMakeLists.txt` если добавили новые файлы
5. Пересоберите проект

## 📤 Как отправить на GitHub

```bash
git add .
git commit -m "добавил новый функционал"
git push
```

## 🎓 Основные правила

- `.h` файлы → папка `include/`
- `.cpp` файлы → папка `src/`
- Не коммитьте папку `build/` и `cmake-build-debug/`
- Пишите понятные сообщения коммитов


