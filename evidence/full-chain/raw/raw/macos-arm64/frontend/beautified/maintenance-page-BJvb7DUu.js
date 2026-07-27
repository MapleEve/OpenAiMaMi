const __vite__mapDeps = (i, m = __vite__mapDeps, d = (m.f || (m.f = ["assets/index-ZeD99E_m.js", "assets/index-B40jKs17.js", "assets/index-CR8sKgfr.css"]))) => i.map(i => d[i]);
import {
    c as T,
    h as z,
    r,
    j as e,
    D as J,
    i as ee,
    k as ae,
    l as te,
    m as ne,
    bi as ge,
    aq as Q,
    B as _,
    H as M,
    a8 as I,
    at as L,
    T as xe,
    p as pe,
    A as he,
    q as A,
    w as fe,
    g as q,
    L as be,
    aa as ye,
    ab as je,
    ac as Ce,
    ad as ve,
    ae as _e,
    af as we,
    ag as ke,
    ah as Ne,
    ai as De,
    n as Ae,
    _ as Se,
    s as v,
    bj as Le,
    bk as Re
} from "./index-B40jKs17.js";
import {
    B as Be
} from "./bento-card-BkTnavwO.js";
import {
    S as Ee
} from "./switch-B_VHNz4M.js";
import {
    R as G
} from "./refresh-cw-BQdVBu6V.js";
import {
    C as Fe
} from "./circle-x-Ctpv_3LC.js";
import {
    T as Me
} from "./trash-2-DRwsDz2M.js";
import {
    Z as Ie
} from "./zap-Bf9T16Fv.js";
import {
    R as Te
} from "./rotate-ccw-BK-Dptsz.js";
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const Ue = T("Image", [
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
const Ke = T("Send", [
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
const Oe = T("Stethoscope", [
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
const Pe = T("Wrench", [
        ["path", {
            d: "M14.7 6.3a1 1 0 0 0 0 1.4l1.6 1.6a1 1 0 0 0 1.4 0l3.77-3.77a6 6 0 0 1-7.94 7.94l-6.91 6.91a2.12 2.12 0 0 1-3-3l6.91-6.91a6 6 0 0 1 7.94-7.94l-3.76 3.76z",
            key: "cbrjhi"
        }]
    ]),
    Y = 600,
    qe = {
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
        db_orphan_providers: "runtime",
        rollout_orphan_providers: "runtime",
        residual_manifest: "runtime",
        residual_cache: "runtime",
        codex_process_state: "runtime",
        state_db_relocation: "runtime",
        codex_home_writable: "env"
    },
    ze = ["config", "auth", "runtime", "env"];
async function O() {
    await new Promise(a => requestAnimationFrame(() => requestAnimationFrame(() => a())))
}
async function P(a) {
    const d = Date.now() - a;
    d < Y && await new Promise(s => setTimeout(s, Y - d))
}

function Qe({
    open: a,
    onOpenChange: d
}) {
    const {
        t: s
    } = z(), [i, u] = r.useState(null), [g, j] = r.useState(!1), [y, w] = r.useState(null), [k, R] = r.useState(!1), [C, b] = r.useState(null), [S, x] = r.useState(null), N = g || k || y !== null, o = async (l = !1) => {
        l ? j(!0) : (I.flushSync(() => j(!0)), await O()), b(null), x(null);
        const c = Date.now();
        try {
            const n = await L("run_codex_router_diagnostics");
            n != null && n.data ? u(n.data) : x(s("relay.diagnostic.dataFormatError"))
        } catch (n) {
            x(n instanceof Error ? n.message : String(n))
        } finally {
            l || await P(c), j(!1)
        }
    }, U = async l => {
        I.flushSync(() => w(l)), await O(), b(null), x(null);
        const c = Date.now();
        try {
            const n = await L("fix_codex_router_issue", {
                itemId: l
            });
            n != null && n.data && b(n.data);
            const D = await L("run_codex_router_diagnostics");
            D != null && D.data && u(D.data)
        } catch (n) {
            x(n instanceof Error ? n.message : String(n))
        } finally {
            await P(c), w(null)
        }
    }, K = async () => {
        I.flushSync(() => R(!0)), await O(), b(null), x(null);
        const l = Date.now();
        try {
            const c = await L("fix_codex_router_issue", {
                itemId: "all"
            });
            c != null && c.data && b(c.data);
            const n = await L("run_codex_router_diagnostics");
            n != null && n.data && u(n.data)
        } catch (c) {
            x(c instanceof Error ? c.message : String(c))
        } finally {
            await P(l), R(!1)
        }
    };
    r.useEffect(() => {
        a ? o(!0) : (u(null), b(null), x(null))
    }, [a]);
    const B = (i == null ? void 0 : i.items.filter(l => l.fixable && l.status !== "ok").length) ?? 0;
    return e.jsx(J, {
        open: a,
        onOpenChange: d,
        children: e.jsxs(ee, {
            className: "max-w-md",
            children: [e.jsxs(ae, {
                children: [e.jsx(te, {
                    children: s("relay.diagnostic.title")
                }), e.jsx(ne, {
                    children: s("relay.diagnostic.description")
                })]
            }), S && e.jsx("div", {
                className: "rounded-xl border border-red-200 dark:border-red-800/50 bg-red-50 dark:bg-red-900/20 px-3 py-2.5",
                children: e.jsx("p", {
                    className: "text-[12px] text-red-600 dark:text-red-400 break-all",
                    children: S
                })
            }), g && !i ? e.jsxs("div", {
                className: "flex items-center justify-center py-8",
                children: [e.jsx(ge, {
                    className: "h-5 w-5 text-muted-foreground"
                }), e.jsx("span", {
                    className: "ml-2 text-sm text-muted-foreground",
                    children: s("relay.diagnostic.running")
                })]
            }) : i && !i.hasIssues ? e.jsxs("div", {
                className: "space-y-3",
                children: [e.jsxs("div", {
                    className: "flex items-center justify-center gap-2 py-4",
                    children: [e.jsx(Q, {
                        className: "h-5 w-5 shrink-0 text-emerald-500"
                    }), e.jsx("p", {
                        className: "text-[13px] leading-relaxed text-foreground/80",
                        children: s("relay.diagnostic.allClear")
                    })]
                }), e.jsx(Z, {
                    result: C,
                    t: s
                }), e.jsx("div", {
                    className: "flex justify-center pt-1",
                    children: e.jsx(_, {
                        size: "sm",
                        variant: "ghost",
                        onClick: () => o(),
                        disabled: N,
                        "aria-busy": g,
                        children: e.jsx(M, {
                            busy: g,
                            idleIcon: e.jsx(G, {
                                className: "h-3.5 w-3.5"
                            }),
                            idleLabel: s("relay.diagnostic.recheck"),
                            busyLabel: s("relay.diagnostic.running")
                        })
                    })
                })]
            }) : i ? e.jsxs("div", {
                className: "space-y-3",
                children: [i.transitionInFlight && e.jsx("div", {
                    className: "rounded-md border border-amber-500/40 bg-amber-500/10 px-3 py-2 text-[13px] leading-relaxed text-amber-700 dark:text-amber-300",
                    children: s("relay.diagnostic.transitionInFlight")
                }), e.jsx("div", {
                    className: "max-h-[58vh] space-y-3 overflow-y-auto pr-1",
                    children: ze.map(l => {
                        const c = i.items.filter(n => (qe[n.id] ?? "runtime") === l);
                        return c.length === 0 ? null : e.jsxs("div", {
                            className: "space-y-1",
                            children: [e.jsx("p", {
                                className: "px-1 text-[11px] font-medium uppercase tracking-wide text-muted-foreground/70",
                                children: s(`relay.diagnostic.group.${l}`)
                            }), c.map(n => e.jsx(He, {
                                item: n,
                                fixing: y === n.id,
                                onFix: () => U(n.id),
                                disabled: N
                            }, n.id))]
                        }, l)
                    })
                }), e.jsx(Z, {
                    result: C,
                    t: s
                }), e.jsxs("div", {
                    className: "flex items-center justify-between pt-1",
                    children: [e.jsx(_, {
                        size: "sm",
                        variant: "ghost",
                        onClick: () => o(),
                        disabled: N,
                        "aria-busy": g,
                        children: e.jsx(M, {
                            busy: g,
                            idleIcon: e.jsx(G, {
                                className: "h-3.5 w-3.5"
                            }),
                            idleLabel: s("relay.diagnostic.recheck"),
                            busyLabel: s("relay.diagnostic.running")
                        })
                    }), B > 0 && e.jsx(_, {
                        size: "sm",
                        onClick: K,
                        disabled: N,
                        "aria-busy": k,
                        children: e.jsx(M, {
                            busy: k,
                            idleIcon: e.jsx(Pe, {
                                className: "h-3.5 w-3.5"
                            }),
                            idleLabel: s("relay.diagnostic.fixAll", {
                                count: B
                            }),
                            busyLabel: s("relay.diagnostic.fixingAll")
                        })
                    })]
                })]
            }) : null]
        })
    })
}

function Z({
    result: a,
    t: d
}) {
    return !a || a.details.length === 0 ? null : e.jsxs("div", {
        className: "rounded-xl border border-border bg-muted/50 dark:bg-black/25 px-3 py-2.5",
        children: [e.jsx("p", {
            className: "text-[11px] font-medium text-muted-foreground mb-1",
            children: d("relay.diagnostic.fixLog")
        }), a.details.map((s, i) => e.jsx("p", {
            className: "text-[11px] text-muted-foreground",
            children: s
        }, i))]
    })
}

function He({
    item: a,
    fixing: d,
    onFix: s,
    disabled: i
}) {
    const {
        t: u
    } = z(), [g, j] = r.useState(!1), y = a.status === "ok" ? Q : a.status === "warning" ? xe : Fe, w = a.status === "ok" ? "text-emerald-500" : a.status === "warning" ? "text-amber-500" : "text-red-500";
    return e.jsxs("div", {
        className: "rounded-xl border border-border/60 px-3 py-2.5",
        children: [e.jsxs("div", {
            className: "flex items-center gap-2",
            children: [e.jsx(y, {
                className: `h-3.5 w-3.5 shrink-0 ${w}`
            }), e.jsx("button", {
                type: "button",
                className: "flex-1 text-left text-[12px] leading-snug",
                onClick: () => a.detail && j(!g),
                children: a.label
            }), a.fixable && a.status !== "ok" && e.jsx(_, {
                size: "sm",
                variant: "outline",
                className: "h-6 px-2 text-[11px]",
                onClick: s,
                disabled: i || d,
                "aria-busy": d,
                children: e.jsx(M, {
                    busy: d,
                    idleLabel: u("relay.diagnostic.fix"),
                    busyLabel: u("relay.diagnostic.fix"),
                    spinnerClassName: "h-3 w-3"
                })
            })]
        }), g && a.detail && e.jsx("p", {
            className: "mt-1.5 pl-5.5 text-[11px] leading-relaxed text-muted-foreground",
            children: a.detail
        })]
    })
}
const X = 800;

function aa() {
    const {
        t: a
    } = z(), d = pe(), [s, i] = r.useState({}), [u, g] = r.useState({}), [j, y] = r.useState(!1), [w, k] = r.useState(!1), [R, C] = r.useState(!1), [b, S] = r.useState(""), x = he({
        queryKey: ["imageCompat"],
        queryFn: async () => (await v.getImageCompat()).data.enabled
    }), N = A({
        mutationFn: async t => {
            await v.setImageCompat(t)
        },
        onSuccess: () => {
            d.invalidateQueries({
                queryKey: ["imageCompat"]
            }), o("imageCompat", {
                type: "success",
                message: a("maintenance.imageCompatDone")
            })
        },
        onError: t => o("imageCompat", {
            type: "error",
            message: String(t)
        })
    }), o = (t, m) => {
        i(p => ({
            ...p,
            [t]: m
        }))
    }, U = A({
        mutationFn: () => v.clean(),
        onSuccess: t => {
            d.invalidateQueries();
            const m = t.data;
            o("clean", {
                type: "success",
                message: a("maintenance.cleanResult", {
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
    }), K = A({
        mutationFn: () => v.forceKillCodex(),
        onSuccess: t => {
            const m = t.data;
            if (m.killedCount === 0) o("forceKill", {
                type: "success",
                message: a("maintenance.forceKillNone")
            });
            else {
                const p = new Map;
                for (const f of m.processes) p.set(f, (p.get(f) || 0) + 1);
                const h = Array.from(p.entries()).map(([f, E]) => E > 1 ? `${f} x${E}` : f).join(", ");
                o("forceKill", {
                    type: "success",
                    message: a("maintenance.forceKillResult", {
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
    }), B = A({
        mutationFn: () => v.restartCodex(),
        onSuccess: () => o("restart", {
            type: "success",
            message: a("maintenance.codexRestarted")
        }),
        onError: t => o("restart", {
            type: "error",
            message: String(t)
        })
    }), l = A({
        mutationFn: async () => {
            const {
                save: t
            } = await Se(async () => {
                const {
                    save: h
                } = await import("./index-ZeD99E_m.js");
                return {
                    save: h
                }
            }, __vite__mapDeps([0, 1, 2])), m = await v.defaultDebugBundleFileName(), p = await t({
                title: a("maintenance.debugBundleSaveTitle"),
                defaultPath: m,
                filters: [{
                    name: "AiMaMi Debug Bundle",
                    extensions: ["zip"]
                }]
            });
            return p ? v.exportDebugBundle(p) : null
        },
        onSuccess: t => {
            t && o("debugBundle", {
                type: "success",
                message: a("maintenance.debugBundleDone", {
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
    }), c = A({
        mutationFn: t => Re({
            userNote: t,
            category: "manual"
        }),
        onSuccess: t => {
            S(""), o("debugUpload", {
                type: "success",
                message: a("maintenance.debugUploadDone", {
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
    }), n = r.useCallback(async (t, m) => {
        if (u[t]) return;
        I.flushSync(() => g(h => ({
            ...h,
            [t]: !0
        }))), await new Promise(h => requestAnimationFrame(() => requestAnimationFrame(h)));
        const p = Date.now();
        try {
            await m()
        } finally {
            const h = Date.now() - p;
            h < X && await new Promise(f => setTimeout(f, X - h)), g(f => ({
                ...f,
                [t]: !1
            }))
        }
    }, [u]), D = () => {
        y(!0)
    }, se = () => {
        y(!1), n("restart", () => B.mutateAsync())
    }, ie = t => {
        n("imageCompat", () => N.mutateAsync(t))
    }, re = () => {
        C(!1), n("debugUpload", () => c.mutateAsync(b.trim()))
    }, oe = [{
        key: "diagnose",
        icon: Oe,
        iconColor: "text-blue-500",
        label: a("maintenance.diagnose"),
        description: a("maintenance.diagnoseDesc"),
        actionLabel: a("maintenance.diagnoseAction"),
        loadingLabel: a("maintenance.diagnosing"),
        onAction: () => k(!0)
    }, {
        key: "debugBundle",
        icon: fe,
        iconColor: "text-cyan-500",
        label: a("maintenance.debugBundle"),
        description: a("maintenance.debugBundleDesc"),
        actionLabel: a("maintenance.debugBundleAction"),
        loadingLabel: a("maintenance.debugBundleRunning"),
        onAction: () => n("debugBundle", () => l.mutateAsync())
    }, {
        key: "debugUpload",
        icon: Ke,
        iconColor: "text-emerald-500",
        label: a("maintenance.debugUpload"),
        description: a("maintenance.debugUploadDesc"),
        actionLabel: a("maintenance.debugUploadAction"),
        loadingLabel: a("maintenance.debugUploadRunning"),
        onAction: () => C(!0)
    }, {
        key: "clean",
        icon: Me,
        iconColor: "text-amber-500",
        label: a("maintenance.clean"),
        description: a("maintenance.cleanDesc"),
        actionLabel: a("maintenance.cleanAction"),
        loadingLabel: a("maintenance.cleaning"),
        onAction: () => n("clean", () => U.mutateAsync())
    }, {
        key: "forceKill",
        icon: Ie,
        iconColor: "text-red-500",
        label: a("maintenance.forceKill"),
        description: a("maintenance.forceKillDesc"),
        actionLabel: a("maintenance.forceKillAction"),
        loadingLabel: a("maintenance.forceKilling"),
        onAction: () => n("forceKill", () => K.mutateAsync()),
        variant: "destructive"
    }, {
        key: "imageCompat",
        icon: Ue,
        iconColor: "text-purple-500",
        label: a("maintenance.imageCompat"),
        description: a("maintenance.imageCompatDesc"),
        actionLabel: x.data ? a("maintenance.imageCompatOn") : a("maintenance.imageCompatOff"),
        loadingLabel: a("maintenance.running"),
        onAction: () => ie(!(x.data ?? !1)),
        isToggle: !0,
        toggleChecked: x.data ?? !1
    }, {
        key: "restart",
        icon: Te,
        iconColor: "text-red-500",
        label: a("maintenance.restartCodex"),
        description: a("maintenance.restartCodexDesc"),
        actionLabel: a("maintenance.restartCodexAction"),
        loadingLabel: a("maintenance.running"),
        onAction: D,
        variant: "destructive"
    }];
    return e.jsxs("div", {
        className: "space-y-6",
        children: [e.jsx("p", {
            className: "text-sm text-muted-foreground",
            children: a("maintenance.description")
        }), e.jsx(Be, {
            className: "p-0",
            children: e.jsx("div", {
                className: "divide-y divide-border",
                children: oe.map(({
                    key: t,
                    icon: m,
                    iconColor: p,
                    label: h,
                    description: f,
                    actionLabel: E,
                    loadingLabel: ce,
                    onAction: H,
                    variant: le,
                    disabled: V,
                    isToggle: de,
                    toggleChecked: ue
                }) => {
                    const $ = s[t],
                        F = !!u[t];
                    return e.jsxs("div", {
                        className: "px-5 py-4 transition-colors hover:bg-accent",
                        children: [e.jsxs("div", {
                            className: "flex items-center justify-between gap-4",
                            children: [e.jsxs("div", {
                                className: "flex items-center gap-3 min-w-0",
                                children: [e.jsx(m, {
                                    className: q("h-[18px] w-[18px] shrink-0", p)
                                }), e.jsxs("div", {
                                    className: "min-w-0",
                                    children: [e.jsx("span", {
                                        className: "text-[14px] font-semibold",
                                        children: h
                                    }), e.jsx("p", {
                                        className: "mt-0.5 text-xs text-muted-foreground leading-relaxed",
                                        children: f
                                    })]
                                })]
                            }), de ? e.jsx(Ee, {
                                checked: ue ?? !1,
                                onCheckedChange: () => H(),
                                disabled: F || V
                            }) : e.jsxs(_, {
                                variant: "outline",
                                size: "sm",
                                onClick: H,
                                disabled: F || V,
                                className: q("shrink-0", le === "destructive" ? "text-muted-foreground hover:bg-destructive hover:text-white hover:border-destructive" : ""),
                                children: [F && e.jsx(be, {
                                    className: "h-3.5 w-3.5 animate-spin"
                                }), F ? ce : E]
                            })]
                        }), $ && e.jsx(Ve, {
                            result: $,
                            onDismiss: () => i(me => {
                                const W = {
                                    ...me
                                };
                                return delete W[t], W
                            })
                        })]
                    }, t)
                })
            })
        }), e.jsx(ye, {
            open: j,
            onOpenChange: y,
            children: e.jsxs(je, {
                className: "max-w-sm",
                children: [e.jsxs(Ce, {
                    children: [e.jsx(ve, {
                        children: a("maintenance.restartConfirmTitle")
                    }), e.jsx(_e, {
                        children: a("maintenance.restartConfirmDesc")
                    })]
                }), e.jsxs(we, {
                    children: [e.jsx(ke, {
                        children: a("common.cancel")
                    }), e.jsx(Ne, {
                        onClick: se,
                        className: "bg-destructive text-white hover:bg-destructive/90",
                        children: a("maintenance.restartCodexAction")
                    })]
                })]
            })
        }), e.jsx(J, {
            open: R,
            onOpenChange: C,
            children: e.jsxs(ee, {
                className: "max-w-md rounded-2xl",
                children: [e.jsxs(ae, {
                    children: [e.jsx(te, {
                        children: a("maintenance.debugUploadDialogTitle")
                    }), e.jsx(ne, {
                        children: a("maintenance.debugUploadDialogDesc")
                    })]
                }), e.jsx(De, {
                    value: b,
                    onChange: t => S(t.target.value.slice(0, 2e3)),
                    placeholder: a("maintenance.debugUploadPlaceholder"),
                    className: "min-h-[120px] rounded-[8px] text-sm"
                }), e.jsx("p", {
                    className: "text-xs leading-relaxed text-muted-foreground",
                    children: a("maintenance.debugUploadPrivacy")
                }), e.jsxs(Ae, {
                    className: "gap-2 sm:gap-0",
                    children: [e.jsx(_, {
                        type: "button",
                        variant: "outline",
                        onClick: () => C(!1),
                        children: a("common.cancel")
                    }), e.jsx(_, {
                        type: "button",
                        onClick: re,
                        children: a("maintenance.debugUploadConfirm")
                    })]
                })]
            })
        }), e.jsx(Qe, {
            open: w,
            onOpenChange: k
        })]
    })
}

function Ve({
    result: a,
    onDismiss: d
}) {
    const [s, i] = r.useState(!1), u = r.useRef();
    r.useEffect(() => (u.current = setTimeout(() => i(!0), 5e3), () => {
        u.current && clearTimeout(u.current)
    }), []);
    const g = () => {
        s && d()
    };
    return e.jsxs("div", {
        onTransitionEnd: g,
        className: q("mt-3 flex items-start gap-2 rounded-[6px] border px-3 py-2 text-xs transition-opacity duration-300", s ? "opacity-0" : "opacity-100", a.type === "success" ? "border-emerald-500/20 bg-emerald-500/5 text-emerald-700 dark:text-emerald-400" : "border-destructive/20 bg-destructive/5 text-destructive"),
        children: [a.type === "success" ? e.jsx(Q, {
            className: "mt-0.5 h-3.5 w-3.5 shrink-0"
        }) : e.jsx(Le, {
            className: "mt-0.5 h-3.5 w-3.5 shrink-0"
        }), e.jsx("span", {
            className: "min-w-0 break-all",
            children: a.message
        })]
    })
}
export {
    aa as MaintenancePage
};