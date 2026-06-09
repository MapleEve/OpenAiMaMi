import { isTauriRuntime } from "@/lib/tauri";

export type AppTheme = "light" | "dark" | "system";

const APP_THEME_VALUES: readonly AppTheme[] = ["light", "dark", "system"];

function assertAppTheme(theme: AppTheme): void {
  if (!APP_THEME_VALUES.includes(theme)) {
    throw new Error("INVALID_APP_THEME");
  }
}

export const themeService = {
  setTheme: async (theme: AppTheme): Promise<void> => {
    assertAppTheme(theme);
    if (!isTauriRuntime()) return;

    const { setTheme } = await import("@tauri-apps/api/app");
    await setTheme(theme === "system" ? null : theme);
  },
};
