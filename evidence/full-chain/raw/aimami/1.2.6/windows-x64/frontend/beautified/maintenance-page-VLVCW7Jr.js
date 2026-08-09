const __vite__mapDeps = (i, m = __vite__mapDeps, d = (m.f || (m.f = ["assets/index-BzQde2Wh.js", "assets/index-COJfQ25H.js", "assets/index-CO38ZUFF.css"]))) => i.map(i => d[i]);
import {
  c as K,
  h as z,
  r,
  j as a,
  D as ae,
  i as te,
  k as ne,
  l as se,
  m as ie,
  bi as be,
  aq as Q,
  B as S,
  H as T,
  a8 as U,
  at as B,
  T as fe,
  p as ye,
  A as Y,
  q as k,
  w as Ce,
  I as je,
  g as P,
  L as _e,
  aa as ve,
  ab as we,
  ac as ke,
  ad as Se,
  ae as Ne,
  af as De,
  ag as Ae,
  ah as Le,
  ai as Re,
  n as Be,
  _ as Ee,
  s as y,
  bj as Fe,
  bk as Me
} from "./index-COJfQ25H.js";
import {
  B as Ie
} from "./bento-card-ll4eNwHO.js";
import {
  S as Te
} from "./switch-B6FMuAS3.js";
import {
  R as Z
} from "./refresh-cw-KIqxtG12.js";
import {
  C as Ue
} from "./circle-x-CIBJWYyb.js";
import {
  T as Ke
} from "./trash-2-DOjp4KQj.js";
import {
  Z as We
} from "./zap-TtjxpWLg.js";
import {
  R as Oe
} from "./rotate-ccw-C7YhjbcL.js";
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const qe = K("Image", [
  ["rect", {
    width: "18",
    height: "18",
    x: "3",
    y: "3",
    rx: "2",
    ry: "2",
    key: "1m3agn"
  }],
  ["circle", {
    cx: "9",
    cy: "9",
    r: "2",
    key: "af1f0g"
  }],
  ["path", {
    d: "m21 15-3.086-3.086a2 2 0 0 0-2.828 0L6 21",
    key: "1xmnt7"
  }]
]);
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const Pe = K("Send", [
  ["path", {
    d: "M14.536 21.686a.5.5 0 0 0 .937-.024l6.5-19a.496.496 0 0 0-.635-.635l-19 6.5a.5.5 0 0 0-.024.937l7.93 3.18a2 2 0 0 1 1.112 1.11z",
    key: "1ffxy3"
  }],
  ["path", {
    d: "m21.854 2.147-10.94 10.939",
    key: "12cjpa"
  }]
]);
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const ze = K("Stethoscope", [
  ["path", {
    d: "M11 2v2",
    key: "1539x4"
  }],
  ["path", {
    d: "M5 2v2",
    key: "1yf1q8"
  }],
  ["path", {
    d: "M5 3H4a2 2 0 0 0-2 2v4a6 6 0 0 0 12 0V5a2 2 0 0 0-2-2h-1",
    key: "rb5t3r"
  }],
  ["path", {
    d: "M8 15a6 6 0 0 0 12 0v-3",
    key: "x18d4x"
  }],
  ["circle", {
    cx: "20",
    cy: "10",
    r: "2",
    key: "ts1r5v"
  }]
]);
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const Qe = K("Wrench", [
    ["path", {
      d: "M14.7 6.3a1 1 0 0 0 0 1.4l1.6 1.6a1 1 0 0 0 1.4 0l3.77-3.77a6 6 0 0 1-7.94 7.94l-6.91 6.91a2.12 2.12 0 0 1-3-3l6.91-6.91a6 6 0 0 1 7.94-7.94l-3.76 3.76z",
      key: "cbrjhi"
    }]
  ]),
  X = 600,
  He = {
    config_toml_syntax: "config",
    config_third_party: "config",
    config_profile_conflict: "config",
    config_stale: "config",
    router_http_contract: "config",
    takeover_backup_orphan: "config",
    catalog_path_validity: "config",
    catalog_integrity: "config",
    config_global_validity: "config",
    auth_integrity: "auth",
    api_key_integrity: "auth",
    auth_token_expiry: "auth",
    router_unlock_auth_residue: "auth",
    proxy_running: "runtime",
    thread_missing_rollouts: "runtime",
    thread_provider_consistency: "runtime",
    thread_poisoned_instructions: "runtime",
    thread_response_item_ids: "runtime",
    db_orphan_providers: "runtime",
    rollout_orphan_providers: "runtime",
    residual_manifest: "runtime",
    residual_cache: "runtime",
    codex_process_state: "runtime",
    state_db_relocation: "runtime",
    codex_home_writable: "env"
  },
  Ve = ["config", "auth", "runtime", "env"];
async function O() {
  await new Promise(e => requestAnimationFrame(() => requestAnimationFrame(() => e())))
}
async function q(e) {
  const l = Date.now() - e;
  l < X && await new Promise(s => setTimeout(s, X - l))
}

function $e({
  open: e,
  onOpenChange: l
}) {
  const {
    t: s
  } = z(), [i, u] = r.useState(null), [g, _] = r.useState(!1), [C, N] = r.useState(null), [D, E] = r.useState(!1), [v, f] = r.useState(null), [R, x] = r.useState(null), A = g || D || C !== null, j = async (d = !1) => {
    d ? _(!0) : (U.flushSync(() => _(!0)), await O()), f(null), x(null);
    const c = Date.now();
    try {
      const n = await B("run_codex_router_diagnostics");
      n != null && n.data ? u(n.data) : x(s("relay.diagnostic.dataFormatError"))
    } catch (n) {
      x(n instanceof Error ? n.message : String(n))
    } finally {
      d || await q(c), _(!1)
    }
  }, W = async d => {
    U.flushSync(() => N(d)), await O(), f(null), x(null);
    const c = Date.now();
    try {
      const n = await B("fix_codex_router_issue", {
        itemId: d
      });
      n != null && n.data && f(n.data);
      const L = await B("run_codex_router_diagnostics");
      L != null && L.data && u(L.data)
    } catch (n) {
      x(n instanceof Error ? n.message : String(n))
    } finally {
      await q(c), N(null)
    }
  }, o = async () => {
    U.flushSync(() => E(!0)), await O(), f(null), x(null);
    const d = Date.now();
    try {
      const c = await B("fix_codex_router_issue", {
        itemId: "all"
      });
      c != null && c.data && f(c.data);
      const n = await B("run_codex_router_diagnostics");
      n != null && n.data && u(n.data)
    } catch (c) {
      x(c instanceof Error ? c.message : String(c))
    } finally {
      await q(d), E(!1)
    }
  };
  r.useEffect(() => {
    e ? j(!0) : (u(null), f(null), x(null))
  }, [e]);
  const F = (i == null ? void 0 : i.items.filter(d => d.fixable && d.status !== "ok").length) ?? 0;
  return a.jsx(ae, {
    open: e,
    onOpenChange: l,
    children: a.jsxs(te, {
      className: "max-w-md",
      children: [a.jsxs(ne, {
        children: [a.jsx(se, {
          children: s("relay.diagnostic.title")
        }), a.jsx(ie, {
          children: s("relay.diagnostic.description")
        })]
      }), R && a.jsx("div", {
        className: "rounded-xl border border-red-200 dark:border-red-800/50 bg-red-50 dark:bg-red-900/20 px-3 py-2.5",
        children: a.jsx("p", {
          className: "text-[12px] text-red-600 dark:text-red-400 break-all",
          children: R
        })
      }), g && !i ? a.jsxs("div", {
        className: "flex items-center justify-center py-8",
        children: [a.jsx(be, {
          className: "h-5 w-5 text-muted-foreground"
        }), a.jsx("span", {
          className: "ml-2 text-sm text-muted-foreground",
          children: s("relay.diagnostic.running")
        })]
      }) : i && !i.hasIssues ? a.jsxs("div", {
        className: "space-y-3",
        children: [a.jsxs("div", {
          className: "flex items-center justify-center gap-2 py-4",
          children: [a.jsx(Q, {
            className: "h-5 w-5 shrink-0 text-emerald-500"
          }), a.jsx("p", {
            className: "text-[13px] leading-relaxed text-foreground/80",
            children: s("relay.diagnostic.allClear")
          })]
        }), a.jsx(J, {
          result: v,
          t: s
        }), a.jsx("div", {
          className: "flex justify-center pt-1",
          children: a.jsx(S, {
            size: "sm",
            variant: "ghost",
            onClick: () => j(),
            disabled: A,
            "aria-busy": g,
            children: a.jsx(T, {
              busy: g,
              idleIcon: a.jsx(Z, {
                className: "h-3.5 w-3.5"
              }),
              idleLabel: s("relay.diagnostic.recheck"),
              busyLabel: s("relay.diagnostic.running")
            })
          })
        })]
      }) : i ? a.jsxs("div", {
        className: "space-y-3",
        children: [i.transitionInFlight && a.jsx("div", {
          className: "rounded-md border border-amber-500/40 bg-amber-500/10 px-3 py-2 text-[13px] leading-relaxed text-amber-700 dark:text-amber-300",
          children: s("relay.diagnostic.transitionInFlight")
        }), a.jsx("div", {
          className: "max-h-[58vh] space-y-3 overflow-y-auto pr-1",
          children: Ve.map(d => {
            const c = i.items.filter(n => (He[n.id] ?? "runtime") === d);
            return c.length === 0 ? null : a.jsxs("div", {
              className: "space-y-1",
              children: [a.jsx("p", {
                className: "px-1 text-[11px] font-medium uppercase tracking-wide text-muted-foreground/70",
                children: s(`relay.diagnostic.group.${d}`)
              }), c.map(n => a.jsx(Ge, {
                item: n,
                fixing: C === n.id,
                onFix: () => W(n.id),
                disabled: A
              }, n.id))]
            }, d)
          })
        }), a.jsx(J, {
          result: v,
          t: s
        }), a.jsxs("div", {
          className: "flex items-center justify-between pt-1",
          children: [a.jsx(S, {
            size: "sm",
            variant: "ghost",
            onClick: () => j(),
            disabled: A,
            "aria-busy": g,
            children: a.jsx(T, {
              busy: g,
              idleIcon: a.jsx(Z, {
                className: "h-3.5 w-3.5"
              }),
              idleLabel: s("relay.diagnostic.recheck"),
              busyLabel: s("relay.diagnostic.running")
            })
          }), F > 0 && a.jsx(S, {
            size: "sm",
            onClick: o,
            disabled: A,
            "aria-busy": D,
            children: a.jsx(T, {
              busy: D,
              idleIcon: a.jsx(Qe, {
                className: "h-3.5 w-3.5"
              }),
              idleLabel: s("relay.diagnostic.fixAll", {
                count: F
              }),
              busyLabel: s("relay.diagnostic.fixingAll")
            })
          })]
        })]
      }) : null]
    })
  })
}

function J({
  result: e,
  t: l
}) {
  return !e || e.details.length === 0 ? null : a.jsxs("div", {
    className: "rounded-xl border border-border bg-muted/50 dark:bg-black/25 px-3 py-2.5",
    children: [a.jsx("p", {
      className: "text-[11px] font-medium text-muted-foreground mb-1",
      children: l("relay.diagnostic.fixLog")
    }), e.details.map((s, i) => a.jsx("p", {
      className: "text-[11px] text-muted-foreground",
      children: s
    }, i))]
  })
}

function Ge({
  item: e,
  fixing: l,
  onFix: s,
  disabled: i
}) {
  const {
    t: u
  } = z(), [g, _] = r.useState(!1), C = e.status === "ok" ? Q : e.status === "warning" ? fe : Ue, N = e.status === "ok" ? "text-emerald-500" : e.status === "warning" ? "text-amber-500" : "text-red-500";
  return a.jsxs("div", {
    className: "rounded-xl border border-border/60 px-3 py-2.5",
    children: [a.jsxs("div", {
      className: "flex items-center gap-2",
      children: [a.jsx(C, {
        className: `h-3.5 w-3.5 shrink-0 ${N}`
      }), a.jsx("button", {
        type: "button",
        className: "flex-1 text-left text-[12px] leading-snug",
        onClick: () => e.detail && _(!g),
        children: e.label
      }), e.fixable && e.status !== "ok" && a.jsx(S, {
        size: "sm",
        variant: "outline",
        className: "h-6 px-2 text-[11px]",
        onClick: s,
        disabled: i || l,
        "aria-busy": l,
        children: a.jsx(T, {
          busy: l,
          idleLabel: u("relay.diagnostic.fix"),
          busyLabel: u("relay.diagnostic.fix"),
          spinnerClassName: "h-3 w-3"
        })
      })]
    }), g && e.detail && a.jsx("p", {
      className: "mt-1.5 pl-5.5 text-[11px] leading-relaxed text-muted-foreground",
      children: e.detail
    })]
  })
}
const ee = 800;

function ia() {
  const {
    t: e
  } = z(), l = ye(), [s, i] = r.useState({}), [u, g] = r.useState({}), [_, C] = r.useState(!1), [N, D] = r.useState(!1), [E, v] = r.useState(!1), [f, R] = r.useState(""), x = Y({
    queryKey: ["imageCompat"],
    queryFn: async () => (await y.getImageCompat()).data.enabled
  }), A = k({
    mutationFn: async t => {
      await y.setImageCompat(t)
    },
    onSuccess: () => {
      l.invalidateQueries({
        queryKey: ["imageCompat"]
      }), o("imageCompat", {
        type: "success",
        message: e("maintenance.imageCompatDone")
      })
    },
    onError: t => o("imageCompat", {
      type: "error",
      message: String(t)
    })
  }), j = Y({
    queryKey: ["claudeWebSearchCompat"],
    queryFn: async () => (await y.getClaudeWebSearchCompat()).data.enabled
  }), W = k({
    mutationFn: async t => {
      await y.setClaudeWebSearchCompat(t)
    },
    onSuccess: () => {
      l.invalidateQueries({
        queryKey: ["claudeWebSearchCompat"]
      }), o("claudeWebSearchCompat", {
        type: "success",
        message: e("maintenance.claudeWebSearchCompatDone")
      })
    },
    onError: t => o("claudeWebSearchCompat", {
      type: "error",
      message: String(t)
    })
  }), o = (t, m) => {
    i(p => ({
      ...p,
      [t]: m
    }))
  }, F = k({
    mutationFn: () => y.clean(),
    onSuccess: t => {
      l.invalidateQueries();
      const m = t.data;
      o("clean", {
        type: "success",
        message: e("maintenance.cleanResult", {
          authBackups: m.authBackupsRemoved,
          registryBackups: m.registryBackupsRemoved,
          staleEntries: m.staleEntriesRemoved
        })
      })
    },
    onError: t => o("clean", {
      type: "error",
      message: String(t)
    })
  }), d = k({
    mutationFn: () => y.forceKillCodex(),
    onSuccess: t => {
      const m = t.data;
      if (m.killedCount === 0) o("forceKill", {
        type: "success",
        message: e("maintenance.forceKillNone")
      });
      else {
        const p = new Map;
        for (const b of m.processes) p.set(b, (p.get(b) || 0) + 1);
        const h = Array.from(p.entries()).map(([b, M]) => M > 1 ? `${b} x${M}` : b).join(", ");
        o("forceKill", {
          type: "success",
          message: e("maintenance.forceKillResult", {
            count: m.killedCount,
            processes: h
          })
        })
      }
    },
    onError: t => o("forceKill", {
      type: "error",
      message: String(t)
    })
  }), c = k({
    mutationFn: () => y.restartCodex(),
    onSuccess: () => o("restart", {
      type: "success",
      message: e("maintenance.codexRestarted")
    }),
    onError: t => o("restart", {
      type: "error",
      message: String(t)
    })
  }), n = k({
    mutationFn: async () => {
      const {
        save: t
      } = await Ee(async () => {
        const {
          save: h
        } = await import("./index-BzQde2Wh.js");
        return {
          save: h
        }
      }, __vite__mapDeps([0, 1, 2])), m = await y.defaultDebugBundleFileName(), p = await t({
        title: e("maintenance.debugBundleSaveTitle"),
        defaultPath: m,
        filters: [{
          name: "AiMaMi Debug Bundle",
          extensions: ["zip"]
        }]
      });
      return p ? y.exportDebugBundle(p) : null
    },
    onSuccess: t => {
      t && o("debugBundle", {
        type: "success",
        message: e("maintenance.debugBundleDone", {
          path: t.data.targetPath
        })
      })
    },
    onError: t => {
      o("debugBundle", {
        type: "error",
        message: String(t)
      })
    }
  }), L = k({
    mutationFn: t => Me({
      userNote: t,
      category: "manual"
    }),
    onSuccess: t => {
      R(""), o("debugUpload", {
        type: "success",
        message: e("maintenance.debugUploadDone", {
          id: t.data.reportId
        })
      })
    },
    onError: t => {
      o("debugUpload", {
        type: "error",
        message: String(t)
      })
    }
  }), w = r.useCallback(async (t, m) => {
    if (u[t]) return;
    U.flushSync(() => g(h => ({
      ...h,
      [t]: !0
    }))), await new Promise(h => requestAnimationFrame(() => requestAnimationFrame(h)));
    const p = Date.now();
    try {
      await m()
    } finally {
      const h = Date.now() - p;
      h < ee && await new Promise(b => setTimeout(b, ee - h)), g(b => ({
        ...b,
        [t]: !1
      }))
    }
  }, [u]), re = () => {
    C(!0)
  }, oe = () => {
    C(!1), w("restart", () => c.mutateAsync())
  }, ce = t => {
    w("imageCompat", () => A.mutateAsync(t))
  }, le = t => {
    w("claudeWebSearchCompat", () => W.mutateAsync(t))
  }, de = () => {
    v(!1), w("debugUpload", () => L.mutateAsync(f.trim()))
  }, ue = [{
    key: "diagnose",
    icon: ze,
    iconColor: "text-blue-500",
    label: e("maintenance.diagnose"),
    description: e("maintenance.diagnoseDesc"),
    actionLabel: e("maintenance.diagnoseAction"),
    loadingLabel: e("maintenance.diagnosing"),
    onAction: () => D(!0)
  }, {
    key: "debugBundle",
    icon: Ce,
    iconColor: "text-cyan-500",
    label: e("maintenance.debugBundle"),
    description: e("maintenance.debugBundleDesc"),
    actionLabel: e("maintenance.debugBundleAction"),
    loadingLabel: e("maintenance.debugBundleRunning"),
    onAction: () => w("debugBundle", () => n.mutateAsync())
  }, {
    key: "debugUpload",
    icon: Pe,
    iconColor: "text-emerald-500",
    label: e("maintenance.debugUpload"),
    description: e("maintenance.debugUploadDesc"),
    actionLabel: e("maintenance.debugUploadAction"),
    loadingLabel: e("maintenance.debugUploadRunning"),
    onAction: () => v(!0)
  }, {
    key: "clean",
    icon: Ke,
    iconColor: "text-amber-500",
    label: e("maintenance.clean"),
    description: e("maintenance.cleanDesc"),
    actionLabel: e("maintenance.cleanAction"),
    loadingLabel: e("maintenance.cleaning"),
    onAction: () => w("clean", () => F.mutateAsync())
  }, {
    key: "forceKill",
    icon: We,
    iconColor: "text-red-500",
    label: e("maintenance.forceKill"),
    description: e("maintenance.forceKillDesc"),
    actionLabel: e("maintenance.forceKillAction"),
    loadingLabel: e("maintenance.forceKilling"),
    onAction: () => w("forceKill", () => d.mutateAsync()),
    variant: "destructive"
  }, {
    key: "imageCompat",
    icon: qe,
    iconColor: "text-purple-500",
    label: e("maintenance.imageCompat"),
    description: e("maintenance.imageCompatDesc"),
    actionLabel: x.data ? e("maintenance.imageCompatOn") : e("maintenance.imageCompatOff"),
    loadingLabel: e("maintenance.running"),
    onAction: () => ce(!(x.data ?? !1)),
    isToggle: !0,
    toggleChecked: x.data ?? !1
  }, {
    key: "claudeWebSearchCompat",
    icon: je,
    iconColor: "text-sky-500",
    label: e("maintenance.claudeWebSearchCompat"),
    description: e("maintenance.claudeWebSearchCompatDesc"),
    actionLabel: j.data ?? !0 ? e("maintenance.claudeWebSearchCompatOn") : e("maintenance.claudeWebSearchCompatOff"),
    loadingLabel: e("maintenance.running"),
    onAction: () => le(!(j.data ?? !0)),
    isToggle: !0,
    toggleChecked: j.data ?? !0,
    disabled: j.isPending
  }, {
    key: "restart",
    icon: Oe,
    iconColor: "text-red-500",
    label: e("maintenance.restartCodex"),
    description: e("maintenance.restartCodexDesc"),
    actionLabel: e("maintenance.restartCodexAction"),
    loadingLabel: e("maintenance.running"),
    onAction: re,
    variant: "destructive"
  }];
  return a.jsxs("div", {
    className: "space-y-6",
    children: [a.jsx("p", {
      className: "text-sm text-muted-foreground",
      children: e("maintenance.description")
    }), a.jsx(Ie, {
      className: "p-0",
      children: a.jsx("div", {
        className: "divide-y divide-border",
        children: ue.map(({
          key: t,
          icon: m,
          iconColor: p,
          label: h,
          description: b,
          actionLabel: M,
          loadingLabel: me,
          onAction: H,
          variant: ge,
          disabled: V,
          isToggle: xe,
          toggleChecked: pe
        }) => {
          const $ = s[t],
            I = !!u[t];
          return a.jsxs("div", {
            className: "px-5 py-4 transition-colors hover:bg-accent",
            children: [a.jsxs("div", {
              className: "flex items-center justify-between gap-4",
              children: [a.jsxs("div", {
                className: "flex items-center gap-3 min-w-0",
                children: [a.jsx(m, {
                  className: P("h-[18px] w-[18px] shrink-0", p)
                }), a.jsxs("div", {
                  className: "min-w-0",
                  children: [a.jsx("span", {
                    className: "text-[14px] font-semibold",
                    children: h
                  }), a.jsx("p", {
                    className: "mt-0.5 text-xs text-muted-foreground leading-relaxed",
                    children: b
                  })]
                })]
              }), xe ? a.jsx(Te, {
                checked: pe ?? !1,
                onCheckedChange: () => H(),
                disabled: I || V
              }) : a.jsxs(S, {
                variant: "outline",
                size: "sm",
                onClick: H,
                disabled: I || V,
                className: P("shrink-0", ge === "destructive" ? "text-muted-foreground hover:bg-destructive hover:text-white hover:border-destructive" : ""),
                children: [I && a.jsx(_e, {
                  className: "h-3.5 w-3.5 animate-spin"
                }), I ? me : M]
              })]
            }), $ && a.jsx(Ye, {
              result: $,
              onDismiss: () => i(he => {
                const G = {
                  ...he
                };
                return delete G[t], G
              })
            })]
          }, t)
        })
      })
    }), a.jsx(ve, {
      open: _,
      onOpenChange: C,
      children: a.jsxs(we, {
        className: "max-w-sm",
        children: [a.jsxs(ke, {
          children: [a.jsx(Se, {
            children: e("maintenance.restartConfirmTitle")
          }), a.jsx(Ne, {
            children: e("maintenance.restartConfirmDesc")
          })]
        }), a.jsxs(De, {
          children: [a.jsx(Ae, {
            children: e("common.cancel")
          }), a.jsx(Le, {
            onClick: oe,
            className: "bg-destructive text-white hover:bg-destructive/90",
            children: e("maintenance.restartCodexAction")
          })]
        })]
      })
    }), a.jsx(ae, {
      open: E,
      onOpenChange: v,
      children: a.jsxs(te, {
        className: "max-w-md rounded-2xl",
        children: [a.jsxs(ne, {
          children: [a.jsx(se, {
            children: e("maintenance.debugUploadDialogTitle")
          }), a.jsx(ie, {
            children: e("maintenance.debugUploadDialogDesc")
          })]
        }), a.jsx(Re, {
          value: f,
          onChange: t => R(t.target.value.slice(0, 2e3)),
          placeholder: e("maintenance.debugUploadPlaceholder"),
          className: "min-h-[120px] rounded-[8px] text-sm"
        }), a.jsx("p", {
          className: "text-xs leading-relaxed text-muted-foreground",
          children: e("maintenance.debugUploadPrivacy")
        }), a.jsxs(Be, {
          className: "gap-2 sm:gap-0",
          children: [a.jsx(S, {
            type: "button",
            variant: "outline",
            onClick: () => v(!1),
            children: e("common.cancel")
          }), a.jsx(S, {
            type: "button",
            onClick: de,
            children: e("maintenance.debugUploadConfirm")
          })]
        })]
      })
    }), a.jsx($e, {
      open: N,
      onOpenChange: D
    })]
  })
}

function Ye({
  result: e,
  onDismiss: l
}) {
  const [s, i] = r.useState(!1), u = r.useRef();
  r.useEffect(() => (u.current = setTimeout(() => i(!0), 5e3), () => {
    u.current && clearTimeout(u.current)
  }), []);
  const g = () => {
    s && l()
  };
  return a.jsxs("div", {
    onTransitionEnd: g,
    className: P("mt-3 flex items-start gap-2 rounded-[6px] border px-3 py-2 text-xs transition-opacity duration-300", s ? "opacity-0" : "opacity-100", e.type === "success" ? "border-emerald-500/20 bg-emerald-500/5 text-emerald-700 dark:text-emerald-400" : "border-destructive/20 bg-destructive/5 text-destructive"),
    children: [e.type === "success" ? a.jsx(Q, {
      className: "mt-0.5 h-3.5 w-3.5 shrink-0"
    }) : a.jsx(Fe, {
      className: "mt-0.5 h-3.5 w-3.5 shrink-0"
    }), a.jsx("span", {
      className: "min-w-0 break-all",
      children: e.message
    })]
  })
}
export {
  ia as MaintenancePage
};