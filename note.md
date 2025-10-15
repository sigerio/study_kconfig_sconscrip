链接：
    https://www.kernel.org/doc/html/latest/kbuild/kconfig-language.html

#1 Kconfig中，depends修饰词将指定修饰项的可见性，当父条目不可见时，该条目也不可见
#2 每个条目都必须有类型int string bool 等
#3 prompt将会替代类型后面所跟的默认的字符串，用于展示给用户的提示词
#4 select表示，当前条目被选中时，无论被启用条目是否可见，都会更改其选中状态，你可以通过例子中的WILL_BE_OPEN_WHEN_A_IS_SELECTED和SELECT_A_TO_MAKE_B_ON来测试
#5 imply表示，当条目被选中时，无论依赖条目此时是否可见，都会同时选中依赖条目，此依赖条目可手动取消，
#6 depends on隐藏的依赖项，并不是真正的隐藏，是可以被kconfig菜单显示出来的，而visible if所隐藏的是真正的隐藏，在条件满足之前，永远无法显示
#7 menu 和 menuend 是一定要成对出现的，用来将内部的定义扩充在一个菜单内