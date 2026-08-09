const __vite__mapDeps = (i, m = __vite__mapDeps, d = (m.f || (m.f = ["assets/index-ZeD99E_m.js", "assets/index-B40jKs17.js", "assets/index-CR8sKgfr.css"]))) => i.map(i => d[i]);
import {
  c as Z,
  h as rs,
  A as as,
  j as e,
  s as z,
  p as Ns,
  r as k,
  y as ks,
  q as V,
  B as T,
  H as $,
  R as ws,
  aa as ys,
  ab as Ss,
  ac as Cs,
  ad as Ms,
  ae as _s,
  af as Ps,
  ag as As,
  ah as Ds,
  t as A,
  _ as Es,
  ak as J,
  g as O,
  o as Ts,
  w as os,
  al as ns
} from "./index-B40jKs17.js";
import {
  B as F
} from "./bento-card-BkTnavwO.js";
import {
  B as E
} from "./badge-eYG8ZyST.js";
import {
  T as zs
} from "./trash-2-DRwsDz2M.js";
import {
  C as X
} from "./chevron-right-DeHCqrMk.js";
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const ls = Z("FolderInput", [
  ["path", {
    d: "M2 9V5a2 2 0 0 1 2-2h3.9a2 2 0 0 1 1.69.9l.81 1.2a2 2 0 0 0 1.67.9H20a2 2 0 0 1 2 2v10a2 2 0 0 1-2 2H4a2 2 0 0 1-2-2v-1",
    key: "fm4g5t"
  }],
  ["path", {
    d: "M2 13h10",
    key: "pgb2dq"
  }],
  ["path", {
    d: "m9 16 3-3-3-3",
    key: "6m91ic"
  }]
]);
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const Fs = Z("Folder", [
  ["path", {
    d: "M20 20a2 2 0 0 0 2-2V8a2 2 0 0 0-2-2h-7.9a2 2 0 0 1-1.69-.9L9.6 3.9A2 2 0 0 0 7.93 3H4a2 2 0 0 0-2 2v13a2 2 0 0 0 2 2Z",
    key: "1kt360"
  }]
]);
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const cs = Z("MessageSquare", [
  ["path", {
    d: "M21 15a2 2 0 0 1-2 2H7l-4 4V5a2 2 0 0 1 2-2h14a2 2 0 0 1 2 2z",
    key: "1lielz"
  }]
]);

function $s(s) {
  return s < 1024 ? `${s} B` : s < 1024 * 1024 ? `${(s/1024).toFixed(1)} KB` : s < 1024 * 1024 * 1024 ? `${(s/(1024*1024)).toFixed(1)} MB` : `${(s/(1024*1024*1024)).toFixed(1)} GB`
}

function Bs() {
  const {
    t: s
  } = rs(), {
    data: t
  } = as({
    queryKey: ["usage-analytics"],
    queryFn: () => z.loadUsageAnalytics(),
    staleTime: 1 / 0
  }), i = t == null ? void 0 : t.data.sessionStats;
  return i ? e.jsxs("div", {
    className: "grid grid-cols-4 gap-4",
    children: [e.jsxs(F, {
      compact: !0,
      children: [e.jsx("span", {
        className: "text-xs text-muted-foreground",
        children: s("sessions.totalSessions")
      }), e.jsx("span", {
        className: "mt-1 text-lg font-semibold",
        children: i.totalSessions
      })]
    }), e.jsxs(F, {
      compact: !0,
      children: [e.jsx("span", {
        className: "text-xs text-muted-foreground",
        children: s("sessions.totalSize")
      }), e.jsx("span", {
        className: "mt-1 text-lg font-semibold",
        children: $s(i.totalSizeBytes)
      })]
    }), e.jsxs(F, {
      compact: !0,
      children: [e.jsx("span", {
        className: "text-xs text-muted-foreground",
        children: s("sessions.activeDays")
      }), e.jsx("span", {
        className: "mt-1 text-lg font-semibold",
        children: i.activeDays
      })]
    }), e.jsxs(F, {
      compact: !0,
      children: [e.jsx("span", {
        className: "text-xs text-muted-foreground",
        children: s("sessions.avgPerDay")
      }), e.jsx("span", {
        className: "mt-1 text-lg font-semibold",
        children: i.avgSessionsPerActiveDay.toFixed(1)
      })]
    })]
  }) : null
}

function Rs(s) {
  const t = s,
    i = new Map;
  for (const a of t) {
    const m = a.isConversationThread ? "__conversations__" : a.projectPath ?? "__ungrouped__",
      x = i.get(m) ?? [];
    x.push(a), i.set(m, x)
  }
  const c = [];
  for (const [a, m] of i.entries()) {
    const x = new Map;
    for (const o of m) x.set(o.id, {
      session: o,
      isOrphan: !!o.parentSessionId,
      children: []
    });
    const v = [];
    for (const o of m) {
      const f = x.get(o.id),
        g = o.parentSessionId;
      g && x.has(g) ? (f.isOrphan = !1, x.get(g).children.push(f)) : v.push(f)
    }
    const b = o => {
      o.sort((f, g) => g.session.updatedAt - f.session.updatedAt);
      for (const f of o) b(f.children)
    };
    b(v);
    const h = m[0],
      p = a === "__conversations__";
    c.push({
      key: a,
      name: p ? "__conversations__" : h.projectName ?? "Unknown Project",
      path: p ? "" : h.projectPath ?? "",
      roots: v,
      sessionCount: m.length,
      projectPathMissing: p ? !1 : m.some(o => o.projectPathMissing === !0)
    })
  }
  return c.sort((a, m) => is(m.roots) - is(a.roots))
}

function I(s) {
  const t = [s.session.id];
  for (const i of s.children) t.push(...I(i));
  return t
}

function ds(s) {
  return s.roots.flatMap(t => I(t))
}

function is(s) {
  let t = 0;
  const i = c => {
    for (const a of c) t = Math.max(t, a.session.updatedAt), i(a.children)
  };
  return i(s), t
}

function us(s) {
  return s == null || s <= 0 ? null : s < 1024 ? `${s} B` : s < 1024 * 1024 ? `${(s/1024).toFixed(1)} KB` : s < 1024 * 1024 * 1024 ? `${(s/(1024*1024)).toFixed(1)} MB` : `${(s/(1024*1024*1024)).toFixed(1)} GB`
}

function Is(s, t) {
  const i = us(s.session.fileSize),
    c = i ? ` · ${i}` : "";
  if (s.isOrphan) return `${t("sessions.orphanThread")} · ${ns(s.session.updatedAt)}${c}`;
  const a = s.children.length;
  return `${ns(s.session.updatedAt)} · ${t("sessions.childThreadsInline",{count:a})}${c}`
}

function Ls(s) {
  const t = [],
    i = c => {
      for (const a of c) t.push(a.session.id), i(a.children)
    };
  for (const c of s) i(c.roots);
  return t
}

function Hs(s, t, i) {
  return t ? i("sessions.orphanThread") : s.parentSessionId ? i("sessions.childThread") : i("sessions.mainThread")
}

function qs(s, t) {
  return s.agentNickname ?? s.agentRole ?? t("sessions.roleUnknown")
}

function B(s) {
  return !s.rolloutMissing && !!s.filePath
}

function R(s) {
  return !!s.worktreeMigration
}

function L(s) {
  var t;
  return ((t = s.worktreeMigration) == null ? void 0 : t.canMigrate) === !0
}

function G(s, t) {
  var i;
  return L(s) ? t("sessions.migrateWorktree") : ((i = s.worktreeMigration) == null ? void 0 : i.blockedReason) ?? t("sessions.migrateWorktreeUnavailable")
}

function ms(s, t) {
  const i = [];
  return s.rolloutMissing && i.push(t("sessions.rolloutMissingHint")), R(s) && !L(s) && i.push(t("sessions.migrateWorktreeBlockedReason", {
    reason: G(s, t)
  })), i
}

function Os(s) {
  return `${(s.threadName||"Untitled Session").replace(/[<>:"/\\|?*\u0000-\u001f]/g," ").replace(/\s+/g," ").trim().replace(/[. ]+$/g,"").slice(0,80)||"Untitled Session"}-${s.id}.md`
}

function W(s) {
  s.stopPropagation()
}

function Y({
  checked: s,
  onToggle: t
}) {
  return e.jsx("button", {
    type: "button",
    onClick: i => {
      i.stopPropagation(), t()
    },
    className: O("flex h-4 w-4 shrink-0 items-center justify-center rounded-[4px] border transition-all", s ? "border-primary bg-primary text-primary-foreground" : "border-border bg-transparent hover:border-primary"),
    "aria-pressed": s,
    children: e.jsx(Ts, {
      className: O("h-3 w-3", s ? "opacity-100" : "opacity-0"),
      strokeWidth: 3
    })
  })
}

function Ws({
  group: s,
  t,
  expandedProjects: i,
  expandedThreads: c,
  selected: a,
  focusedId: m,
  exportingId: x,
  migratingId: v,
  onToggleProject: b,
  onToggleThread: h,
  onToggleGroupSelection: p,
  onToggleBranchSelection: o,
  onToggleSessionSelection: f,
  onFocusSession: g,
  onExportSession: j,
  onMigrateWorktree: S
}) {
  const C = ds(s),
    M = C.length > 0 && C.every(w => a.has(w)),
    N = i.has(s.key);
  return e.jsxs("div", {
    className: "shrink-0 overflow-hidden rounded-xl border border-border bg-card shadow-sm",
    children: [e.jsxs("div", {
      className: O("flex cursor-pointer items-center gap-3 px-3.5 py-3.5 transition-colors", N ? "bg-muted/60" : "hover:bg-muted/40"),
      onClick: () => b(s.key),
      children: [e.jsx(Y, {
        checked: M,
        onToggle: () => p(s)
      }), N ? e.jsx(J, {
        className: "h-[18px] w-[18px] text-muted-foreground"
      }) : e.jsx(X, {
        className: "h-[18px] w-[18px] text-muted-foreground"
      }), s.key === "__conversations__" ? e.jsx(cs, {
        className: "h-[18px] w-[18px] text-primary",
        strokeWidth: 2.4
      }) : e.jsx(Fs, {
        className: "h-[18px] w-[18px] text-primary",
        strokeWidth: 2.4
      }), e.jsxs("div", {
        className: "min-w-0 flex-1",
        children: [e.jsx("div", {
          className: "truncate text-[15px] font-semibold text-foreground",
          children: s.key === "__conversations__" ? t("sessions.conversationGroup") : s.name
        }), s.key !== "__conversations__" && e.jsx("div", {
          className: "truncate text-[13px] text-muted-foreground",
          children: s.path
        })]
      }), e.jsx("div", {
        className: "flex size-7 shrink-0 items-center justify-center rounded-full bg-muted text-[11px] font-medium tabular-nums text-muted-foreground",
        children: s.sessionCount
      })]
    }), N && e.jsx("div", {
      className: "border-t border-border/60 bg-background/40",
      children: s.roots.map(w => e.jsx(Gs, {
        node: w,
        t,
        expandedThreads: c,
        selected: a,
        focusedId: m,
        exportingId: x,
        migratingId: v,
        onToggleThread: h,
        onToggleBranchSelection: o,
        onToggleSessionSelection: f,
        onFocusSession: g,
        onExportSession: j,
        onMigrateWorktree: S
      }, w.session.id))
    })]
  })
}

function Gs({
  node: s,
  t,
  expandedThreads: i,
  selected: c,
  focusedId: a,
  exportingId: m,
  migratingId: x,
  onToggleThread: v,
  onToggleBranchSelection: b,
  onToggleSessionSelection: h,
  onFocusSession: p,
  onExportSession: o,
  onMigrateWorktree: f
}) {
  const g = s.children.length > 0,
    j = i.has(s.session.id),
    S = a === s.session.id,
    C = I(s),
    M = C.length > 0 && C.every(l => c.has(l)),
    N = ms(s.session, t),
    w = () => {
      g ? (b(s), j || v(s.session.id)) : h(s.session.id), p(s.session.id)
    };
  return e.jsxs("div", {
    className: "border-t border-border/60 py-3 first:border-t-0",
    children: [e.jsxs("div", {
      className: "group relative w-full transition-colors hover:bg-muted/40",
      children: [S && e.jsx("div", {
        className: "pointer-events-none absolute inset-y-0 left-0 z-10 w-[3px] bg-primary"
      }), e.jsxs("div", {
        className: "relative z-0 flex w-full cursor-pointer items-center gap-3 px-4 py-3",
        onClick: w,
        children: [e.jsx(Y, {
          checked: M,
          onToggle: () => b(s)
        }), g ? j ? e.jsx(J, {
          className: "h-4 w-4 shrink-0 text-muted-foreground"
        }) : e.jsx(X, {
          className: "h-4 w-4 shrink-0 text-muted-foreground"
        }) : e.jsx("div", {
          className: "w-4 shrink-0"
        }), e.jsx("div", {
          className: "h-2.5 w-2.5 shrink-0 rounded-full bg-primary ring-4 ring-primary/15"
        }), e.jsxs("div", {
          className: "min-w-0 flex-1",
          children: [e.jsxs("div", {
            className: "flex min-w-0 items-center gap-2",
            children: [e.jsx("span", {
              className: O("block min-w-0 flex-1 truncate text-left text-[14px] font-semibold transition-colors", a === s.session.id ? "text-foreground" : "text-foreground/90"),
              children: s.session.threadName
            }), s.session.rolloutMissing ? e.jsx(E, {
              variant: "outline",
              className: "shrink-0 rounded-full px-2 py-0 text-[10px] font-medium text-amber-600 dark:text-amber-300",
              children: t("sessions.rolloutMissing")
            }) : null, R(s.session) ? e.jsx(E, {
              variant: "outline",
              className: "shrink-0 rounded-full px-2 py-0 text-[10px] font-medium text-primary",
              children: t("sessions.worktreeThread")
            }) : null]
          }), e.jsx("div", {
            className: "mt-1 truncate text-[12px] text-muted-foreground",
            children: Is(s, t)
          }), N.length > 0 ? e.jsx("div", {
            className: "mt-1 space-y-0.5",
            children: N.map(l => e.jsx("div", {
              className: "truncate text-[11px] font-medium text-amber-600 dark:text-amber-300",
              children: l
            }, l))
          }) : null]
        }), R(s.session) ? e.jsx(T, {
          variant: "ghost",
          size: "icon-sm",
          disabled: !L(s.session) || x === s.session.id,
          title: G(s.session, t),
          onClick: l => {
            W(l), f(s.session)
          },
          children: e.jsx($, {
            busy: x === s.session.id,
            idleIcon: e.jsx(ls, {
              className: "h-3.5 w-3.5"
            })
          })
        }) : null, e.jsx(T, {
          variant: "ghost",
          size: "icon-sm",
          disabled: !B(s.session) || m === s.session.id,
          title: B(s.session) ? t("sessions.exportMarkdown") : t("sessions.exportUnavailable"),
          onClick: l => {
            W(l), o(s.session)
          },
          children: e.jsx($, {
            busy: m === s.session.id,
            idleIcon: e.jsx(os, {
              className: "h-3.5 w-3.5"
            })
          })
        })]
      })]
    }), g && j ? e.jsx("div", {
      className: "mt-3 space-y-3",
      children: s.children.map(l => e.jsx(xs, {
        node: l,
        t,
        level: 1,
        expandedThreads: i,
        selected: c,
        focusedId: a,
        exportingId: m,
        migratingId: x,
        onToggleThread: v,
        onToggleBranchSelection: b,
        onToggleSessionSelection: h,
        onFocusSession: p,
        onExportSession: o,
        onMigrateWorktree: f
      }, l.session.id))
    }) : null]
  })
}

function xs({
  node: s,
  t,
  level: i,
  expandedThreads: c,
  selected: a,
  focusedId: m,
  exportingId: x,
  migratingId: v,
  onToggleThread: b,
  onToggleBranchSelection: h,
  onToggleSessionSelection: p,
  onFocusSession: o,
  onExportSession: f,
  onMigrateWorktree: g
}) {
  const j = s.children.length > 0,
    S = c.has(s.session.id),
    C = j ? I(s).every(l => a.has(l)) : a.has(s.session.id),
    M = us(s.session.fileSize),
    N = ms(s.session, t),
    w = () => {
      j ? (h(s), S || b(s.session.id)) : p(s.session.id), o(s.session.id)
    };
  return e.jsxs("div", {
    className: "space-y-3",
    children: [e.jsx("div", {
      className: "relative w-full transition-colors hover:bg-muted/40",
      children: e.jsxs("div", {
        className: "flex w-full cursor-pointer items-center gap-3 px-4 py-3",
        onClick: w,
        children: [e.jsx(Y, {
          checked: C,
          onToggle: () => j ? h(s) : p(s.session.id)
        }), j ? S ? e.jsx(J, {
          className: "h-4 w-4 shrink-0 text-muted-foreground"
        }) : e.jsx(X, {
          className: "h-4 w-4 shrink-0 text-muted-foreground"
        }) : e.jsx("div", {
          className: "w-4 shrink-0"
        }), e.jsx("div", {
          className: "h-2.5 w-2.5 shrink-0 rounded-full bg-primary/60 ring-4 ring-primary/10"
        }), e.jsxs("div", {
          className: "min-w-0 flex-1",
          children: [e.jsxs("div", {
            className: "flex min-w-0 items-center gap-2",
            children: [e.jsx("span", {
              className: "block min-w-0 flex-1 truncate text-left text-[14px] font-medium text-foreground",
              children: s.session.threadName
            }), s.session.rolloutMissing ? e.jsx(E, {
              variant: "outline",
              className: "shrink-0 rounded-full px-2 py-0 text-[10px] font-medium text-amber-600 dark:text-amber-300",
              children: t("sessions.rolloutMissing")
            }) : null, R(s.session) ? e.jsx(E, {
              variant: "outline",
              className: "shrink-0 rounded-full px-2 py-0 text-[10px] font-medium text-primary",
              children: t("sessions.worktreeThread")
            }) : null]
          }), e.jsxs("div", {
            className: "mt-1 flex min-w-0 flex-nowrap items-center gap-2 text-[12px] text-muted-foreground",
            children: [e.jsxs("div", {
              className: "min-w-0 flex-1 truncate",
              children: [Hs(s.session, s.isOrphan, t), " · ", qs(s.session, t), M ? ` · ${M}` : ""]
            }), s.isOrphan ? e.jsx(E, {
              variant: "outline",
              className: "shrink-0 rounded-full px-2 py-0 text-[10px] font-medium text-amber-600 dark:text-amber-300",
              children: t("sessions.orphanThread")
            }) : null]
          }), N.length > 0 ? e.jsx("div", {
            className: "mt-1 space-y-0.5",
            children: N.map(l => e.jsx("div", {
              className: "truncate text-[11px] font-medium text-amber-600 dark:text-amber-300",
              children: l
            }, l))
          }) : null]
        }), R(s.session) ? e.jsx(T, {
          variant: "ghost",
          size: "icon-sm",
          disabled: !L(s.session) || v === s.session.id,
          title: G(s.session, t),
          onClick: l => {
            W(l), g(s.session)
          },
          children: e.jsx($, {
            busy: v === s.session.id,
            idleIcon: e.jsx(ls, {
              className: "h-3.5 w-3.5"
            })
          })
        }) : null, e.jsx(T, {
          variant: "ghost",
          size: "icon-sm",
          disabled: !B(s.session) || x === s.session.id,
          title: B(s.session) ? t("sessions.exportMarkdown") : t("sessions.exportUnavailable"),
          onClick: l => {
            W(l), f(s.session)
          },
          children: e.jsx($, {
            busy: x === s.session.id,
            idleIcon: e.jsx(os, {
              className: "h-3.5 w-3.5"
            })
          })
        })]
      })
    }), j && S && e.jsx("div", {
      className: "space-y-3 border-l border-border/60 pl-4",
      style: {
        marginLeft: `${Math.max(8,i*12)}px`
      },
      children: s.children.map(l => e.jsx(xs, {
        node: l,
        t,
        level: i + 1,
        expandedThreads: c,
        selected: a,
        focusedId: m,
        exportingId: x,
        migratingId: v,
        onToggleThread: b,
        onToggleBranchSelection: h,
        onToggleSessionSelection: p,
        onFocusSession: o,
        onExportSession: f,
        onMigrateWorktree: g
      }, l.session.id))
    })]
  })
}

function Js() {
  var es, ts;
  const {
    t: s
  } = rs(), t = Ns(), i = k.useRef(!1), [c, a] = k.useState(new Set), [m, x] = k.useState(new Set), [v, b] = k.useState(new Set), [h, p] = k.useState(null), [o, f] = k.useState(null), g = ks({
    minVisibleMs: 800
  }), {
    data: j,
    refetch: S,
    isPending: C,
    isFetching: M
  } = as({
    queryKey: ["sessions"],
    queryFn: () => z.loadSessions()
  }), N = g.busy, w = !j && (C || M), l = (j == null ? void 0 : j.data.items) ?? [], H = k.useMemo(() => new Map(l.map(n => [n.id, n])), [l]), _ = k.useMemo(() => Rs(l), [l]), P = k.useMemo(() => Ls(_), [_]), q = k.useMemo(() => new Set(P), [P]), ss = k.useMemo(() => P.filter(n => {
    const r = H.get(n);
    return !!(r != null && r.parentSessionId) && !q.has(r.parentSessionId)
  }).length, [H, P, q]);
  k.useEffect(() => {
    if (i.current || _.length === 0) return;
    const n = _[0],
      r = n.roots[0];
    i.current = !0, x(new Set([n.key])), r && b(new Set([r.session.id]))
  }, [_]), k.useEffect(() => {
    a(n => {
      let r = !1;
      const u = new Set;
      for (const d of n) H.has(d) ? u.add(d) : r = !0;
      return r ? u : n
    })
  }, [H]), k.useEffect(() => {
    if (P.length === 0) {
      h !== null && p(null);
      return
    }(!h || !q.has(h)) && p(P[0])
  }, [h, P, q]);
  const hs = async () => {
    await g.run(async () => {
      await Promise.all([S(), t.refetchQueries({
        queryKey: ["usage-analytics"],
        type: "active"
      })])
    })
  }, U = V({
    mutationFn: n => z.deleteSessions(n),
    onSuccess: n => {
      const r = n.data.deletedIds ?? [],
        u = n.data.failed ?? [];
      a(d => {
        const D = new Set(d);
        for (const y of r) D.delete(y);
        return D
      }), h && r.includes(h) && p(null), f(null), Promise.all([t.invalidateQueries({
        queryKey: ["sessions"]
      }), t.refetchQueries({
        queryKey: ["usage-analytics"],
        type: "active"
      })]), u.length > 0 ? A({
        title: s("sessions.deletePartialTitle", {
          failed: u.length
        }),
        description: `${u[0].reason} · ${s("sessions.restartHint")}`,
        variant: "destructive"
      }) : r.length > 0 && A({
        title: s("sessions.deleteSuccess", {
          count: r.length
        }),
        description: s("sessions.restartHint"),
        variant: "success"
      })
    },
    onError: n => {
      A({
        title: s("sessions.deleteFailed"),
        description: n instanceof Error ? n.message : String(n),
        variant: "destructive"
      })
    }
  }), K = V({
    mutationFn: async n => {
      if (!B(n)) throw new Error(s("sessions.exportUnavailable"));
      const {
        save: r
      } = await Es(async () => {
        const {
          save: d
        } = await import("./index-ZeD99E_m.js");
        return {
          save: d
        }
      }, __vite__mapDeps([0, 1, 2])), u = await r({
        title: s("sessions.exportSaveTitle"),
        defaultPath: Os(n),
        filters: [{
          name: "Markdown",
          extensions: ["md", "markdown"]
        }]
      });
      if (!u) throw new Error("CANCELLED");
      return z.exportSessionMarkdown(n.id, u)
    },
    onSuccess: n => {
      A({
        title: s("sessions.exportSuccess"),
        description: s("sessions.exportSuccessDesc", {
          path: n.data.targetPath
        }),
        variant: "success"
      })
    },
    onError: n => {
      n instanceof Error && n.message === "CANCELLED" || A({
        title: s("sessions.exportFailed"),
        description: n instanceof Error ? n.message : String(n),
        variant: "destructive"
      })
    }
  }), Q = V({
    mutationFn: async n => {
      if (!L(n)) throw new Error(G(n, s));
      return z.migrateSessionWorktree(n.id)
    },
    onSuccess: n => {
      A({
        title: s("sessions.migrateWorktreeSuccess"),
        description: `${s("sessions.migrateWorktreeSuccessDesc",{path:n.data.targetPath})} · ${s("sessions.restartHint")}`,
        variant: "success"
      }), t.invalidateQueries({
        queryKey: ["sessions"]
      })
    },
    onError: n => {
      A({
        title: s("sessions.migrateWorktreeFailed"),
        description: n instanceof Error ? n.message : String(n),
        variant: "destructive"
      })
    }
  }), fs = n => {
    f(n)
  }, ps = n => {
    const r = ds(n);
    a(u => {
      const d = new Set(u),
        D = r.some(y => !d.has(y));
      for (const y of r) D ? d.add(y) : d.delete(y);
      return d
    })
  }, gs = n => {
    const r = I(n);
    a(u => {
      const d = new Set(u),
        D = r.some(y => !d.has(y));
      for (const y of r) D ? d.add(y) : d.delete(y);
      return d
    })
  }, js = n => {
    a(r => {
      const u = new Set(r);
      return u.has(n) ? u.delete(n) : u.add(n), u
    })
  }, vs = K.isPending ? ((es = K.variables) == null ? void 0 : es.id) ?? null : null, bs = Q.isPending ? ((ts = Q.variables) == null ? void 0 : ts.id) ?? null : null;
  return e.jsxs("div", {
    className: "flex h-full min-h-0 flex-col gap-6 overflow-hidden",
    children: [e.jsxs("div", {
      className: "flex shrink-0 items-center justify-between gap-4",
      children: [e.jsx("p", {
        className: "min-w-0 max-w-md truncate text-sm text-muted-foreground",
        children: s("sessions.description")
      }), e.jsxs("div", {
        className: "flex items-center gap-2",
        children: [c.size > 0 && e.jsxs(T, {
          variant: "destructive",
          size: "sm",
          onClick: () => fs({
            ids: [...c],
            title: s("sessions.deleteSelectionTitle", {
              count: c.size
            }),
            description: s("sessions.deleteSelectionDesc", {
              count: c.size
            }),
            actionLabel: s("sessions.delete")
          }),
          disabled: U.isPending,
          children: [e.jsx(zs, {
            className: "h-3.5 w-3.5"
          }), s("sessions.delete"), " (", c.size, ")"]
        }), e.jsx(T, {
          variant: "outline",
          size: "icon-sm",
          onClick: hs,
          disabled: N,
          "aria-busy": N,
          title: s(N ? "common.refreshing" : "common.refresh"),
          children: e.jsx($, {
            busy: N,
            idleIcon: e.jsx(ws, {
              className: "h-3.5 w-3.5"
            })
          })
        })]
      })]
    }), e.jsx("div", {
      className: "shrink-0",
      children: e.jsx(Bs, {})
    }), !w && _.length === 0 ? e.jsx(F, {
      className: "min-h-0 flex-1",
      children: e.jsxs("div", {
        className: "flex h-64 flex-col items-center justify-center",
        children: [e.jsx(cs, {
          className: "h-10 w-10 text-muted-foreground/40"
        }), e.jsx("p", {
          className: "mt-3 text-sm text-muted-foreground",
          children: s("sessions.empty")
        })]
      })
    }) : e.jsxs("div", {
      className: "relative flex min-h-0 min-w-0 flex-1 flex-col overflow-hidden rounded-2xl border border-border bg-card shadow-sm",
      children: [e.jsx("div", {
        className: "shrink-0 border-b border-border/60 px-4 py-4",
        children: e.jsx("div", {
          className: "flex items-start gap-3",
          children: e.jsxs("div", {
            className: "min-w-0 flex-1",
            children: [e.jsxs("div", {
              className: "flex min-w-0 items-center gap-2",
              children: [e.jsx("div", {
                className: "truncate text-sm font-semibold text-foreground",
                children: s("sessions.treeTitle")
              }), ss > 0 ? e.jsx(E, {
                variant: "outline",
                className: "shrink-0 rounded-full border-amber-500/25 bg-amber-500/[0.06] px-2.5 py-0 text-sm font-semibold text-amber-700 dark:text-amber-300",
                children: s("sessions.orphanCount", {
                  count: ss
                })
              }) : null]
            }), e.jsx("p", {
              className: "mt-1 truncate text-xs leading-5 text-muted-foreground",
              children: s("sessions.treeDescription")
            })]
          })
        })
      }), e.jsx("div", {
        className: "min-h-0 flex-1 overflow-y-auto bg-card px-4 py-4",
        children: e.jsx("div", {
          className: "flex flex-col gap-3",
          children: _.map(n => e.jsx(Ws, {
            group: n,
            t: s,
            expandedProjects: m,
            expandedThreads: v,
            selected: c,
            focusedId: h,
            exportingId: vs,
            migratingId: bs,
            onToggleProject: r => {
              x(u => {
                const d = new Set(u);
                return d.has(r) ? d.delete(r) : d.add(r), d
              })
            },
            onToggleThread: r => {
              b(u => {
                const d = new Set(u);
                return d.has(r) ? d.delete(r) : d.add(r), d
              })
            },
            onToggleGroupSelection: ps,
            onToggleBranchSelection: gs,
            onToggleSessionSelection: js,
            onFocusSession: p,
            onExportSession: r => K.mutate(r),
            onMigrateWorktree: r => Q.mutate(r)
          }, n.key))
        })
      }), w && e.jsx("div", {
        className: "absolute inset-0 z-10 flex items-center justify-center bg-background/80 backdrop-blur-sm",
        children: e.jsxs("div", {
          className: "space-y-3 text-center",
          children: [e.jsx("div", {
            className: "mx-auto h-10 w-10 animate-spin rounded-full border-2 border-border border-t-primary"
          }), e.jsx("div", {
            className: "text-sm font-medium text-foreground",
            children: s("sessions.loadingTitle")
          }), e.jsx("div", {
            className: "text-xs text-muted-foreground",
            children: s("sessions.loadingDescription")
          })]
        })
      })]
    }), e.jsx(ys, {
      open: o !== null,
      onOpenChange: n => !n && f(null),
      children: e.jsxs(Ss, {
        children: [e.jsxs(Cs, {
          children: [e.jsx(Ms, {
            children: o == null ? void 0 : o.title
          }), e.jsxs(_s, {
            children: [o == null ? void 0 : o.description, e.jsx("span", {
              className: "mt-2 block text-xs text-amber-700 dark:text-amber-300",
              children: s("sessions.deleteLagHint")
            })]
          })]
        }), e.jsxs(Ps, {
          children: [e.jsx(As, {
            children: s("common.cancel")
          }), e.jsx(Ds, {
            className: "bg-destructive text-destructive-foreground hover:bg-destructive/90",
            onClick: n => {
              n.preventDefault(), o && U.mutate(o.ids)
            },
            children: U.isPending ? s("common.loading") : o == null ? void 0 : o.actionLabel
          })]
        })]
      })
    })]
  })
}
export {
  Js as SessionsPage
};