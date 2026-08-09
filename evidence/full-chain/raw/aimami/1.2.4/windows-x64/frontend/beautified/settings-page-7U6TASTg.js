const __vite__mapDeps = (i, m = __vite__mapDeps, d = (m.f || (m.f = ["assets/app-g-9b7oPp.js", "assets/index-UqyngLFp.js", "assets/index-CO38ZUFF.css"]))) => i.map(i => d[i]);
import {
  c as xe,
  h as be,
  p as fe,
  z as ve,
  r as h,
  y as je,
  q as f,
  A as E,
  _ as ye,
  j as e,
  bl as we,
  bm as Se,
  bn as P,
  g as j,
  bo as T,
  W as De,
  B as v,
  H as Ce,
  w as Ne,
  D as ke,
  i as Ee,
  k as Pe,
  l as Te,
  m as _e,
  J as G,
  n as Me,
  L as Ae,
  V as Ie,
  aj as Fe,
  t as l,
  s as u,
  X as Qe,
  Y as U,
  v as z,
  Z as Re,
  $ as Be,
  a0 as J,
  x as X
} from "./index-UqyngLFp.js";
import {
  i as Z,
  s as Oe
} from "./auto-switch-BJRHUfJM.js";
import {
  S as _
} from "./switch-D-WVtNjE.js";
import {
  B as qe
} from "./bento-card-FKBS-Zu5.js";
import {
  B as $
} from "./badge-BFikN3mw.js";
import {
  G as ee
} from "./globe-BLKmlM4n.js";
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const Le = xe("Monitor", [
  ["rect", {
    width: "20",
    height: "14",
    x: "2",
    y: "3",
    rx: "2",
    key: "48i651"
  }],
  ["line", {
    x1: "8",
    x2: "16",
    y1: "21",
    y2: "21",
    key: "1svkeh"
  }],
  ["line", {
    x1: "12",
    x2: "12",
    y1: "17",
    y2: "21",
    key: "vw1qmm"
  }]
]);

function Ve(r, o) {
  return r(o === "manual" ? "settings.apiProxyModeManual" : "settings.apiProxyModeDirect")
}

function Je({
  snapshotEnvelope: r,
  theme: o,
  onThemeChange: g,
  accent: y,
  setAccent: w,
  heatmap: te,
  setHeatmap: se,
  language: ae,
  setLanguage: ne,
  refreshInterval: ie,
  setRefreshInterval: re,
  onCheckUpdate: oe,
  onRefreshUsageStatus: S
}) {
  var W, Y;
  const {
    t: s
  } = be(), d = fe(), D = ve(), a = r == null ? void 0 : r.data.status, [le, p] = h.useState(!1), [C, I] = h.useState(15), [N, F] = h.useState(10), [ce, de] = h.useState(!1), [he, Q] = h.useState(!1), R = je({
    minVisibleMs: 600
  }), B = t => {
    de(t), I((a == null ? void 0 : a.autoSwitch.threshold5hPercent) ?? 15), F((a == null ? void 0 : a.autoSwitch.thresholdWeeklyPercent) ?? 10), p(!0)
  }, ue = () => {
    Q(!0)
  }, O = f({
    mutationFn: () => u.setAutoSwitch(!1),
    onMutate: async () => {
      X(), await z(d);
      const t = d.getQueryData(Re),
        n = d.getQueryData(Be);
      return J(d, i => ({
        ...i,
        data: {
          ...i.data,
          status: {
            ...i.data.status,
            autoSwitch: {
              ...i.data.status.autoSwitch,
              enabled: !1
            }
          }
        }
      })), {
        previous: t,
        previousProgressive: n
      }
    },
    onError: (t, n, i) => {
      Qe(d, {
        display: i == null ? void 0 : i.previous,
        progressive: i == null ? void 0 : i.previousProgressive
      }), l({
        title: s("common.error"),
        description: U(t, s("common.toastErrorGenericDesc")),
        variant: "destructive"
      })
    },
    onSuccess: t => {
      l({
        title: s("settings.autoSwitchDisabled"),
        description: t.warnings.length > 0 ? t.warnings.map(n => n.message).join(`
`) : s("settings.autoSwitchDisabledDesc"),
        variant: t.warnings.length > 0 ? "warning" : "success"
      })
    }
  }), x = f({
    mutationFn: Oe,
    onMutate: async () => {
      X(), await z(d)
    },
    onSuccess: (t, n) => {
      p(!1), J(d, m => ({
        ...m,
        data: {
          ...m.data,
          status: {
            ...m.data.status,
            autoSwitch: t.data.autoSwitch
          }
        }
      }));
      const i = t.data.autoSwitch.enabled;
      l({
        title: n.enable ? s("settings.autoSwitchEnabled") : s("settings.thresholdSavedTitle"),
        description: t.warnings.length > 0 ? t.warnings.map(m => m.message).join(`
`) : s(i ? "settings.autoSwitchEnabledDesc" : "settings.thresholdSavedDesc"),
        variant: t.warnings.length > 0 ? "warning" : "success"
      })
    },
    onError: t => {
      l({
        title: s("common.error"),
        description: U(t, s("common.toastErrorGenericDesc")),
        variant: "destructive"
      })
    }
  }), b = E({
    queryKey: ["has-notch"],
    queryFn: () => u.hasNotch(),
    staleTime: 1 / 0,
    enabled: D
  }).data ?? !1, ge = E({
    queryKey: ["hotspot-enabled"],
    queryFn: () => u.getHotspotEnabled(),
    enabled: D && b
  }), q = E({
    queryKey: ["autostart-state"],
    queryFn: () => u.getAutostartState()
  }), L = f({
    mutationFn: t => u.setAutostartEnabled(t),
    onSuccess: (t, n) => {
      d.invalidateQueries({
        queryKey: ["autostart-state"]
      }), l({
        title: s(n ? "settings.autostartEnabled" : "settings.autostartDisabled")
      })
    },
    onError: t => {
      l({
        title: s("settings.autostartFailed"),
        description: t instanceof Error ? t.message : String(t),
        variant: "destructive"
      })
    }
  }), V = f({
    mutationFn: t => u.setHotspotEnabled(t),
    onSuccess: (t, n) => {
      d.invalidateQueries({
        queryKey: ["hotspot-enabled"]
      }), l({
        title: s(n ? "settings.hotspotEnabled" : "settings.hotspotDisabled"),
        description: s(n ? "settings.hotspotEnabledDesc" : "settings.hotspotDisabledDesc"),
        variant: "success"
      })
    }
  }), k = R.busy, me = async () => {
    await R.run(async () => {
      try {
        const t = await oe();
        t === "up-to-date" ? l({
          title: s("settings.upToDate"),
          description: s("settings.upToDateDesc"),
          variant: "default"
        }) : t === "error" && l({
          title: s("settings.updateCheckFailed"),
          description: s("settings.updateCheckFailedDesc"),
          variant: "destructive"
        })
      } catch {
        l({
          title: s("settings.updateCheckFailed"),
          description: s("settings.updateCheckFailedDesc"),
          variant: "destructive"
        })
      }
    })
  }, [pe, H] = h.useState("...");
  h.useEffect(() => {
    ye(() => import("./app-g-9b7oPp.js"), __vite__mapDeps([0, 1, 2])).then(t => t.getVersion()).then(H).catch(() => H("unknown"))
  }, []);
  const K = (a == null ? void 0 : a.api.proxy) ?? {
    mode: "direct",
    url: null
  };
  return e.jsxs("div", {
    className: "space-y-8",
    children: [e.jsxs(M, {
      title: s("settings.appearance"),
      children: [e.jsx(c, {
        label: s("settings.theme"),
        children: e.jsx(A, {
          items: [{
            value: "light",
            icon: we,
            label: s("settings.light")
          }, {
            value: "dark",
            icon: Se,
            label: s("settings.dark")
          }, {
            value: "system",
            icon: Le,
            label: s("settings.system")
          }],
          value: o,
          onChange: t => g(t)
        })
      }), e.jsx(c, {
        label: s("settings.language"),
        children: e.jsx(A, {
          items: [{
            value: "zh",
            icon: ee,
            label: "中文"
          }, {
            value: "en",
            icon: ee,
            label: "English"
          }],
          value: ae,
          onChange: ne
        })
      }), e.jsx(c, {
        label: s("settings.accentColor"),
        description: s("settings.accentColorDesc"),
        children: e.jsx("div", {
          className: "flex gap-2",
          children: Object.keys(P).map(t => e.jsx("button", {
            onClick: () => w(t),
            title: P[t].label,
            className: j("h-6 w-6 rounded-full ring-2 ring-offset-2 ring-offset-card transition-transform hover:scale-110", y === t ? "ring-foreground" : "ring-transparent"),
            style: {
              backgroundColor: P[t].hex
            }
          }, t))
        })
      }), e.jsx(c, {
        label: s("settings.heatmapColor"),
        description: s("settings.heatmapColorDesc"),
        children: e.jsx("div", {
          className: "flex gap-2",
          children: Object.keys(T).map(t => e.jsx("button", {
            onClick: () => se(t),
            title: T[t].label,
            className: j("h-6 w-6 rounded-full ring-2 ring-offset-2 ring-offset-card transition-transform hover:scale-110", te === t ? "ring-foreground" : "ring-transparent"),
            style: {
              backgroundColor: T[t].hex
            }
          }, t))
        })
      }), D && e.jsx(c, {
        label: s("settings.hotspot"),
        description: s(b ? "settings.hotspotDesc" : "settings.hotspotNotSupported"),
        children: e.jsx(_, {
          checked: b && (ge.data ?? !1),
          onCheckedChange: t => V.mutate(t),
          disabled: !b || V.isPending
        })
      }), e.jsx(c, {
        label: s("settings.autostart"),
        description: s("settings.autostartDesc"),
        children: e.jsx(_, {
          checked: ((Y = (W = q.data) == null ? void 0 : W.data) == null ? void 0 : Y.enabled) ?? !1,
          onCheckedChange: t => L.mutate(t),
          disabled: q.isLoading || L.isPending
        })
      })]
    }), e.jsxs(M, {
      title: s("settings.modeSwitch"),
      children: [e.jsxs("div", {
        className: "flex items-center justify-between px-5 py-4",
        children: [e.jsxs("div", {
          children: [e.jsxs("div", {
            className: "flex items-center gap-2",
            children: [e.jsx("span", {
              className: "text-[13px] font-medium",
              children: s("settings.autoSwitch")
            }), (a == null ? void 0 : a.autoSwitch.enabled) && e.jsxs($, {
              variant: "secondary",
              className: "cursor-pointer text-[11px] font-normal hover:bg-secondary/60",
              onClick: () => B(!1),
              children: ["5h ≤", a.autoSwitch.threshold5hPercent ?? 15, "% · 1w ≤", a.autoSwitch.thresholdWeeklyPercent ?? 10, "%"]
            })]
          }), e.jsx("p", {
            className: "mt-0.5 text-xs text-muted-foreground",
            children: s("settings.autoSwitchDesc")
          })]
        }), e.jsx(_, {
          checked: (a == null ? void 0 : a.autoSwitch.enabled) ?? !1,
          onCheckedChange: t => {
            t ? B(!0) : O.mutate()
          },
          disabled: O.isPending || x.isPending
        })]
      }), e.jsx(c, {
        label: s("settings.refreshInterval"),
        description: s("settings.refreshIntervalDesc"),
        children: e.jsx(A, {
          items: De.map(({
            value: t,
            labelKey: n
          }) => ({
            value: t,
            label: s(n)
          })),
          value: ie,
          onChange: t => re(t),
          compact: !0
        })
      }), e.jsx(c, {
        label: e.jsxs("div", {
          className: "flex items-center gap-2",
          children: [e.jsx("span", {
            children: s("settings.apiProxy")
          }), e.jsx($, {
            variant: "secondary",
            className: "text-[11px] font-normal",
            children: Ve(s, K.mode)
          })]
        }),
        description: s("settings.apiProxyDesc"),
        children: e.jsx(v, {
          variant: "outline",
          size: "sm",
          onClick: ue,
          children: s("common.edit")
        })
      })]
    }), e.jsxs(M, {
      title: s("settings.about"),
      children: [e.jsx(c, {
        label: s("settings.version"),
        children: e.jsx("span", {
          className: " text-sm text-muted-foreground",
          children: pe
        })
      }), e.jsx(c, {
        label: s("settings.checkUpdate"),
        children: e.jsx(v, {
          variant: "outline",
          size: "sm",
          onClick: me,
          disabled: k,
          "aria-busy": k,
          children: e.jsx(Ce, {
            busy: k,
            idleIcon: e.jsx(Ne, {
              className: "h-3.5 w-3.5 shrink-0"
            }),
            idleLabel: s("settings.checkUpdate"),
            busyLabel: s("settings.checkUpdateBusy")
          })
        })
      })]
    }), e.jsx(ke, {
      open: le,
      onOpenChange: p,
      children: e.jsxs(Ee, {
        className: "max-w-sm",
        children: [e.jsxs(Pe, {
          children: [e.jsx(Te, {
            children: s("settings.thresholdDialogTitle")
          }), e.jsx(_e, {
            children: s("settings.thresholdDialogDesc")
          })]
        }), e.jsxs("div", {
          className: "space-y-4 py-2",
          children: [e.jsxs("div", {
            className: "flex items-center justify-between",
            children: [e.jsx("span", {
              className: "text-sm",
              children: s("settings.threshold5h")
            }), e.jsxs("div", {
              className: "flex items-center gap-2",
              children: [e.jsx(G, {
                type: "number",
                min: 1,
                max: 100,
                value: C,
                onChange: t => I(Number(t.target.value)),
                className: "h-8 w-20 rounded-[8px] text-right text-xs"
              }), e.jsx("span", {
                className: "text-sm text-muted-foreground",
                children: "%"
              })]
            })]
          }), e.jsxs("div", {
            className: "flex items-center justify-between",
            children: [e.jsx("span", {
              className: "text-sm",
              children: s("settings.thresholdWeekly")
            }), e.jsxs("div", {
              className: "flex items-center gap-2",
              children: [e.jsx(G, {
                type: "number",
                min: 1,
                max: 100,
                value: N,
                onChange: t => F(Number(t.target.value)),
                className: "h-8 w-20 rounded-[8px] text-right text-xs"
              }), e.jsx("span", {
                className: "text-sm text-muted-foreground",
                children: "%"
              })]
            })]
          })]
        }), e.jsxs(Me, {
          children: [e.jsx(v, {
            variant: "outline",
            onClick: () => p(!1),
            children: s("common.cancel")
          }), e.jsxs(v, {
            onClick: () => x.mutate({
              enable: ce,
              t5h: C,
              tWeekly: N
            }),
            disabled: x.isPending || !Z(C) || !Z(N),
            children: [x.isPending && e.jsx(Ae, {
              className: "h-4 w-4 animate-spin"
            }), s("common.save")]
          })]
        })]
      })
    }), e.jsx(Ie, {
      open: he,
      onOpenChange: Q,
      currentProxy: K,
      onSaved: () => S == null ? void 0 : S()
    })]
  })
}

function M({
  title: r,
  children: o
}) {
  return e.jsxs("div", {
    className: "space-y-2",
    children: [e.jsx("h2", {
      className: "px-1 text-[11px] font-bold uppercase tracking-widest text-muted-foreground",
      children: r
    }), e.jsx(qe, {
      className: "p-0 [&>div]:divide-y [&>div]:divide-border",
      children: o
    })]
  })
}

function c({
  label: r,
  description: o,
  children: g
}) {
  return e.jsxs("div", {
    className: "flex items-center justify-between px-5 py-4",
    children: [e.jsxs("div", {
      children: [e.jsx("span", {
        className: "text-[13px] font-medium",
        children: r
      }), o && e.jsx("div", {
        className: "mt-0.5 text-xs text-muted-foreground",
        children: o
      })]
    }), g]
  })
}

function A({
  items: r,
  value: o,
  onChange: g,
  compact: y = !1
}) {
  return e.jsx("div", {
    className: j("rounded-full bg-muted p-0.5 dark:bg-white/[0.06]"),
    children: e.jsx(Fe, {
      items: r,
      value: o,
      onValueChange: w => g(w),
      className: "gap-0.5",
      indicatorClassName: "rounded-full bg-white shadow-sm dark:bg-white/[0.10]",
      itemClassName: j("rounded-full whitespace-nowrap text-xs font-medium [&_svg]:h-3.5 [&_svg]:w-3.5", y ? "px-2.5 py-1.5" : "gap-1.5 px-3 py-1.5"),
      activeItemClassName: "text-foreground",
      inactiveItemClassName: "text-muted-foreground hover:text-foreground"
    })
  })
}
export {
  Je as SettingsPage
};