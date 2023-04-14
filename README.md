# kawaii-compiler 2.0

This is the **2.0** edition of **Kawaii** compiler. Explanation can be accessed in 1.0 also discord server: https://discord.gg/UmtdVUUvGw

# how does it work?

There is a specific function called `Luau::compile` which compiles lua scripts (code) into executable **bytecode**. After that, it uses `luau_load` to load the bytecode into a function, then uses `task.defer` (warning: logs calls) to run the function.

# whats the difference?

This is *way* better then 1.0 and also it was the first DLL I released without **skidding** after years.

# how to use?

[coming soon]

# credits

`compiler` https://github.com/roblox/luau/

`contribution` https://github.com/plusgiant5/

`we didnt forget you!` https://skid.com/

It would be really cool if you credited us if you used this source!
