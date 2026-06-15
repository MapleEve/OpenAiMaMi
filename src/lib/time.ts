import i18n from "@/lib/i18n";

function t(key: string, options?: Record<string, unknown>): string {
  return i18n.t(key, options);
}

function lang(): string {
  return i18n.language ?? "zh";
}

function locale(): string {
  return lang() === "zh" ? "zh-CN" : "en-US";
}

/**
 * 完整日期时间。
 */
export function formatDateTime(epochSec: number): string {
  const d = new Date(epochSec * 1000);
  if (lang() === "zh") {
    const date = d.toLocaleDateString("zh-CN", {
      year: "numeric",
      month: "2-digit",
      day: "2-digit",
    });
    const time = d.toLocaleTimeString("zh-CN", {
      hour: "2-digit",
      minute: "2-digit",
      hour12: false,
    });
    return `${date} ${time}`;
  }
  const date = d.toLocaleDateString("en-US", {
    month: "short",
    day: "numeric",
    year: "numeric",
  });
  const time = d.toLocaleTimeString("en-US", {
    hour: "2-digit",
    minute: "2-digit",
    hour12: false,
  });
  return `${date} ${time}`;
}

/**
 * 仅日期。
 */
export function formatDate(epochSec: number): string {
  const d = new Date(epochSec * 1000);
  if (lang() === "zh") {
    return d.toLocaleDateString("zh-CN", {
      year: "numeric",
      month: "2-digit",
      day: "2-digit",
    });
  }
  return d.toLocaleDateString("en-US", {
    month: "short",
    day: "numeric",
    year: "numeric",
  });
}

/**
 * 短日期。
 */
export function formatDateShort(epochSec: number): string {
  const d = new Date(epochSec * 1000);
  return `${d.getMonth() + 1}/${d.getDate()}`;
}

/**
 * 相对时间。
 */
export function formatRelative(epochSec: number): string {
  const diff = Math.floor(Date.now() / 1000 - epochSec);

  if (diff < 60) return t("common.time.justNow");
  if (diff < 3600) {
    return t("common.time.minutesAgo", { count: Math.floor(diff / 60) });
  }
  if (diff < 86400) {
    return t("common.time.hoursAgo", { count: Math.floor(diff / 3600) });
  }
  if (diff < 604800) {
    return t("common.time.daysAgo", { count: Math.floor(diff / 86400) });
  }
  return formatDate(epochSec);
}

/**
 * 剩余倒计时。
 */
export function formatRemaining(diffSec: number): string {
  const h = Math.floor(diffSec / 3600);
  const m = Math.floor((diffSec % 3600) / 60);

  if (h > 0) {
    return t("common.time.remainingHoursMinutes", { hours: h, minutes: m });
  }
  return t("common.time.remainingMinutes", { minutes: m });
}

/**
 * 时长。
 */
export function formatDuration(minutes: number): string {
  if (minutes < 60) return t("common.time.durationMinutes", { minutes });
  const h = Math.floor(minutes / 60);
  const rest = minutes % 60;
  return rest > 0
    ? t("common.time.durationHoursMinutes", { hours: h, minutes: rest })
    : t("common.time.durationHours", { hours: h });
}

/**
 * 重置标签。
 */
export function formatResetLabel(epochSec: number): string {
  const d = new Date(epochSec * 1000);
  const now = Date.now() / 1000;
  const diff = epochSec - now;

  const dateStr = `${d.getMonth() + 1}/${d.getDate()}`;
  const timeStr = d.toLocaleTimeString(locale(), {
    hour: "2-digit",
    minute: "2-digit",
    hour12: false,
  });

  const resetWord = t("common.time.reset");

  if (diff <= 0) return `${dateStr} ${timeStr} ${resetWord}`;

  return `${dateStr} ${timeStr} ${resetWord} | ${formatRemaining(diff)}`;
}

/**
 * 热力图月份缩写。
 */
export function formatMonthShort(date: Date): string {
  return date.toLocaleString(locale(), { month: "short" });
}

/**
 * 热力图 tooltip 日期。
 */
export function formatHeatmapDate(dateStr: string): string {
  const d = new Date(`${dateStr}T00:00:00`);
  const epochSec = Math.floor(d.getTime() / 1000);
  return formatDate(epochSec);
}

/**
 * 完整日期时间用于 title 悬停提示。
 */
export function formatDateTimeFull(epochSec: number): string {
  return formatDateTime(epochSec);
}
