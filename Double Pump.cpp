if (g_doublepump) {
        uintptr_t CurrentWeapon = read<uintptr_t>(g_pid, Globals::LocalPawn + 0x790);
        if (CurrentWeapon) {
            write<bool>(g_pid, CurrentWeapon + 0xf41, true);
        }
    }