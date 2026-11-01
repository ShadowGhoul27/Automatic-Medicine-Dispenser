#pragma once
#include <pgmspace.h>
const char WEB_CSS[] PROGMEM = R"CSS(
@import url('https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600&family=Plus+Jakarta+Sans:wght@500;600;700;800&display=swap');

:root{--font:'Inter',system-ui,-apple-system,"Segoe UI",Roboto,Arial,sans-serif;--heading-font:'Plus Jakarta Sans','Inter',system-ui,sans-serif;
--page-title:36px;--section-title:22px;--body-label:16px;--caption:14px;--content-width:1120px;
--ac-l:#b30000;--ac-l-rgb:179,0,0;--ac-d:#ff5a66;--ac-d-rgb:255,90,102;--ac-d-fill:#c8283a;
color-scheme:light;
--bg:#fafafa;--surface:#fff;--surface-2:#f5f5f6;--card:#fff;--card2:#f5f5f6;--side:#fff;
--text:#0b0b0c;--muted:#4a4a4f;--subtle:#6f6f75;
--accent:var(--ac-l);--accent-fill:var(--ac-l);--active:var(--ac-l);--on-accent:#fff;--banner:var(--ac-l);
--brand-700:var(--ac-l);--brand-600:var(--ac-l);--brand-500:var(--ac-l);--brand-300:var(--ac-l);
--border:#dcdcdf;--card-border:#e3e3e6;--rule:#e8e8ea;--rule-strong:#cfcfd3;--field-border:#c9c9ce;
--taken:#157a3c;--late:#9a6200;--missed:#b42318;--info:#0b68a0;--paused:#6f6f75;--ok:#157a3c;--miss:#b42318;--none:#6f6f75;
--ok-bg:#e4f4e9;--miss-bg:#fde9e7;
--inset:#fff;--inset-2:#f1f1f3;--tint:rgba(var(--ac-l-rgb),.07);--tint-2:rgba(var(--ac-l-rgb),.13);
--track:#e3e3e6;--ring-track:#e3e3e6;--line:#d6d6da;--danger-bg:#fdeaea;--danger-text:#b42318;--danger-hover-text:#8a1a10;--danger-fill:#b42318;
--st-ok:#e3f4e9;--st-late:#fbf0cf;--st-missed:#fbe2df;--st-future:#f2f2f4;
--knob-off:#6f6f75;--toggle-border:#8a8a90;--focus:#0b0b0c;--shadow-c:#0002;--overlay:#0007;--skip-text:#b42318;
--low-bg:#fff1e6;--low-border:#e8751a;--low-text:#1a1a1a;--low-strong:#a34100}
html[data-accent="blue"]{--ac-l:#1d4ed8;--ac-l-rgb:29,78,216;--ac-d:#6aa6ff;--ac-d-rgb:106,166,255;--ac-d-fill:#2f66d0}
html[data-accent="green"]{--ac-l:#15803d;--ac-l-rgb:21,128,61;--ac-d:#4cc77d;--ac-d-rgb:76,199,125;--ac-d-fill:#1a7f45}
html[data-accent="purple"]{--ac-l:#7c3aed;--ac-l-rgb:124,58,237;--ac-d:#b995ff;--ac-d-rgb:185,149,255;--ac-d-fill:#7b4bd1}
html[data-accent="orange"]{--ac-l:#c2540a;--ac-l-rgb:194,84,10;--ac-d:#ff9a4d;--ac-d-rgb:255,154,77;--ac-d-fill:#c2540a}
html[data-accent="teal"]{--ac-l:#0f766e;--ac-l-rgb:15,118,110;--ac-d:#3fd0c4;--ac-d-rgb:63,208,196;--ac-d-fill:#0f766e}
html[data-theme="dark"]{color-scheme:dark;
--bg:#0b0b0c;--surface:#151516;--surface-2:#1d1d1f;--card:#151516;--card2:#1d1d1f;--side:#101011;
--text:#f5f5f6;--muted:#c4c4c9;--subtle:#9a9aa1;
--accent:var(--ac-d);--accent-fill:var(--ac-d-fill);--active:var(--ac-d-fill);--on-accent:#fff;--banner:var(--ac-d-fill);
--brand-700:var(--ac-d-fill);--brand-600:var(--ac-d-fill);--brand-500:var(--ac-d-fill);--brand-300:var(--ac-d);
--border:#2a2a2d;--card-border:#2a2a2d;--rule:#2a2a2d;--rule-strong:#3a3a3f;--field-border:#3a3a3f;
--taken:#73d29f;--late:#e8b955;--missed:#f2857d;--info:#82c6eb;--paused:#9a9aa1;--ok:#73d29f;--miss:#f2857d;--none:#9a9aa1;
--ok-bg:rgba(115,210,159,.14);--miss-bg:rgba(242,133,125,.14);
--inset:#0b0b0c;--inset-2:#1a1a1c;--tint:rgba(var(--ac-d-rgb),.12);--tint-2:rgba(var(--ac-d-rgb),.2);
--track:#2d2d31;--ring-track:#2d2d31;--line:#3a3a3f;--danger-bg:#54222a;--danger-text:#ffb0b6;--danger-hover-text:#fff;--danger-fill:#8f2835;
--st-ok:#173829;--st-late:#4a4120;--st-missed:#522a30;--st-future:#1d1d1f;
--knob-off:#d6d6da;--toggle-border:#5a5a60;--focus:#fff;--shadow-c:#0007;--overlay:#000a;--skip-text:#ffaaa5;
--low-bg:#4a2716;--low-border:#ff9a52;--low-text:#fff;--low-strong:#ffd56a}
body.high-contrast{--bg:#000;--side:#000;--card:#111;--card2:#000;--text:#fff;--muted:#fff;--subtle:#fff;--border:#fff;--card-border:#fff;--rule:#fff;--rule-strong:#fff;--field-border:#fff;--info:#7efcff;--brand-300:#fff;--inset:#000;--inset-2:#000;--tint:#000;--tint-2:#000;--track:#333;--ring-track:#333;--line:#fff;--st-ok:#000;--st-late:#000;--st-missed:#000;--st-future:#000;--toggle-border:#fff}
html[data-theme="light"] body.high-contrast,html:not([data-theme]) body.high-contrast{--bg:#fff;--side:#fff;--card:#fff;--card2:#fff;--text:#000;--muted:#000;--subtle:#000;--border:#000;--card-border:#000;--rule:#000;--rule-strong:#000;--field-border:#000;--taken:#0a5c26;--late:#6b4200;--missed:#8f1308;--ok:#0a5c26;--miss:#8f1308;--info:#004f7c;--brand-300:#000;--inset:#fff;--inset-2:#fff;--tint:#fff;--tint-2:#eee;--track:#bbb;--ring-track:#bbb;--line:#000;--st-ok:#fff;--st-late:#fff;--st-missed:#fff;--st-future:#fff;--toggle-border:#000;--ok-bg:#fff;--miss-bg:#fff;--knob-off:#000}
body.large-text{--page-title:40px;--section-title:25px;--body-label:18px;--caption:16px}

*{box-sizing:border-box;margin:0;padding:0}
html,body{height:100%}
html{scroll-behavior:smooth}
body{background:var(--bg);color:var(--text);font-family:var(--font);font-size:var(--body-label);display:flex}
h1,h2,h3,h4{font-family:var(--heading-font);font-weight:700}
button,input,select{font-family:var(--font);font-size:inherit;color:inherit}
button{cursor:pointer;border:0}
:focus-visible{outline:2px solid var(--focus);outline-offset:2px}
::placeholder{color:var(--subtle);opacity:1}
h1{font-size:var(--page-title);margin-bottom:4px}
.sub{font-size:var(--body-label);color:var(--muted);margin-bottom:14px}

body>nav{width:208px;flex:none;background:var(--side);border:1px solid var(--card-border);border-left:0;border-radius:0 22px 22px 0;padding:20px 14px;display:flex;flex-direction:column;gap:8px;min-height:100vh;min-height:100dvh}
.logo{color:var(--text);font-family:var(--heading-font);font-weight:800;font-size:26px;letter-spacing:-.02em;padding:4px 10px 18px;margin:0 0 10px;border-bottom:1px solid var(--rule)}
.logo span{color:var(--accent)}
body>nav button{background:none;color:var(--muted);text-align:left;padding:12px 14px;border-radius:12px;font-size:calc(var(--body-label) + 2px);font-weight:600;min-height:48px;display:flex;align-items:center;gap:8px}
body>nav button svg{display:block;width:20px;height:20px;fill:none;stroke:currentColor;stroke-width:2;stroke-linecap:round;stroke-linejoin:round;flex:none}
body>nav button:not(.on):hover{background:var(--tint)}
body>nav button.on{background:var(--accent-fill);color:var(--on-accent)}

main{flex:1;padding:34px 32px;overflow:auto;position:relative}
.wrap{max-width:var(--content-width);margin:0 auto}
#schedule,#dash,#settings{max-width:820px;margin:0 auto}
section{display:none}
section.on{display:block}
.card{background:var(--card);border:1px solid var(--card-border);border-radius:18px;padding:20px}
.grid2{display:grid;grid-template-columns:1fr 1fr;gap:16px;margin-top:16px}
.grid3{display:grid;grid-template-columns:repeat(3,1fr);gap:8px;margin-top:8px}
.btn{background:var(--accent-fill);color:var(--on-accent);font-weight:700;border-radius:12px;padding:10px 20px;font-size:var(--body-label);min-height:46px}
.btn:not(:disabled):hover{filter:brightness(.92)}
.btn:disabled{opacity:.45;cursor:not-allowed}
.btn.line{background:none;border:1.5px solid var(--accent);color:var(--accent);font-weight:700;padding:6px 14px;font-size:var(--caption)}
.btn.fill{padding:6px 14px;font-size:var(--caption)}
.text-link{background:none;color:var(--accent);font-size:var(--caption);font-weight:700;padding:4px 0;min-height:44px}
.field{width:100%;background:var(--inset);border:1px solid var(--field-border);border-radius:10px;padding:12px;font-size:var(--body-label);margin-bottom:8px}
.save{width:100%;padding:12px;font-size:var(--body-label);margin-top:4px}
.section-heading{display:flex;justify-content:space-between;align-items:end;gap:12px;margin-bottom:9px}
.section-heading h2{font-size:var(--section-title)}
.section-heading p{font-size:var(--caption);color:var(--muted);margin-top:3px}
.card-title{display:flex;align-items:center;justify-content:space-between;gap:8px}
.card-title h2{font-size:var(--body-label)}
.connection{font-size:var(--caption);color:var(--ok);background:var(--ok-bg);padding:6px 12px;border-radius:999px;display:flex;align-items:center;gap:6px;font-weight:700}
.connection i{width:8px;height:8px;border-radius:50%;background:var(--ok);display:inline-block}
.connection.off{color:var(--miss);background:var(--miss-bg)}
.connection.off i{background:var(--miss)}
.status-label{display:inline-flex;align-items:center;gap:4px}
.status-label::before{font-size:var(--caption)}
.status-label.taken::before{content:'✓'}
.status-label.late::before{content:'◷'}
.status-label.missed::before{content:'!'}
.status-label.info::before{content:'i';font-weight:700}
.container-chip{display:inline-block;border-radius:999px;padding:3px 8px;font-size:var(--caption);font-weight:600;line-height:1.15;color:#fff}
.container-1{background:#2d6bb5}
.container-2{background:#8a479f}
.container-3{background:#a4561f}
.container-4{background:#1d7a61}
#toast{position:fixed;left:50%;bottom:24px;transform:translateX(-50%);background:var(--accent-fill);color:var(--on-accent);padding:10px 16px;border-radius:20px;font-size:var(--caption);font-weight:700;opacity:0;pointer-events:none;transition:opacity .2s;z-index:30}
#toast.on{opacity:1}
#toast.err{background:var(--miss);color:#fff}
.sync-skeleton{height:14px;border-radius:5px;background:linear-gradient(90deg,var(--track) 25%,var(--line) 37%,var(--track) 63%);background-size:400% 100%;animation:shimmer 1.2s infinite;margin:9px 0}
.sync-skeleton.short{width:58%}
@keyframes shimmer{0%{background-position:100% 0}100%{background-position:0 0}}

.toggle-input{position:absolute;opacity:0;width:1px;height:1px;margin:0;pointer-events:none}
.settings-line{position:relative}
.toggle-label{width:50px;height:28px;border-radius:14px;background:var(--track);border:1px solid var(--toggle-border);position:relative;display:inline-block;cursor:pointer;flex:none}
.toggle-label::before{content:"";position:absolute;inset:-10px -6px}
.toggle-label::after{content:"";position:absolute;width:20px;height:20px;border-radius:50%;background:var(--knob-off);left:3px;top:3px;transition:left .16s,background .16s}
.toggle-input:checked+.toggle-label{background:var(--accent-fill);border-color:var(--accent-fill)}
.toggle-input:checked+.toggle-label::after{left:25px;background:#fff}
.toggle-input:focus-visible+.toggle-label{outline:2px solid var(--focus);outline-offset:3px}
.tg{width:44px;height:24px;border-radius:12px;background:var(--track);border:1px solid var(--toggle-border);position:relative;flex:none;display:block}
.tg::after{content:"";position:absolute;top:2px;left:3px;width:18px;height:18px;border-radius:50%;background:var(--knob-off);transition:left .15s}
.tg.on{background:var(--accent-fill);border-color:var(--accent-fill)}
.tg.on::after{left:22px;background:#fff}

.home-head{display:flex;justify-content:space-between;align-items:flex-start;gap:14px}
.home-head .btn{white-space:nowrap}
.home-summary{display:grid;grid-template-columns:repeat(3,1fr);gap:16px;margin-top:22px}
.home-summary-card{min-height:216px;padding:22px 24px;display:flex;flex-direction:column}
.home-summary-card small{font-size:var(--caption);color:var(--muted);font-weight:700}
.home-summary-card h2{font-size:calc(var(--page-title) - 2px);font-weight:800;margin:16px 0 8px;line-height:1.1}
.home-summary-card>small,.home-summary-card .card-title small{display:flex;align-items:center;font-size:calc(var(--body-label) + 1px)}
.home-summary-card p{font-size:var(--body-label);line-height:1.4;color:var(--muted)}
.home-summary-card .btn,.home-summary-card .text-link{margin-top:auto;align-self:flex-start}
.home-summary-card .schedule-link{display:inline-flex;align-items:center;gap:6px;margin-top:12px;padding:7px 11px;border:1px solid var(--accent);border-radius:10px;background:var(--tint);color:var(--accent);font-weight:700;text-decoration:none}
.home-progress-row{margin-top:auto;display:flex;align-items:center;gap:14px}
.home-progress-row b{font-size:var(--body-label);min-width:2.6em;text-align:right}
.home-progress{flex:1;height:14px;border-radius:999px;background:var(--track);overflow:hidden}
.home-progress i{height:100%;display:block;border-radius:inherit;background:var(--accent-fill);transition:width .2s}
.home-status .card-title{align-items:center}
.home-status .connection{white-space:nowrap}
.status-detail{display:flex;align-items:center;justify-content:space-between;gap:12px;font-size:var(--body-label);color:var(--muted);margin-top:auto;padding-top:16px;border-top:1px solid var(--rule)}
.status-detail .sep{width:1px;height:18px;background:var(--rule-strong)}
.next-actions{display:grid;gap:10px;margin-top:auto}
.home-summary-card .next-actions .btn{margin-top:0;align-self:stretch;width:100%;text-align:center}
.low-battery{margin-top:12px;padding:12px 14px;border:1px solid var(--low-border);border-radius:12px;background:var(--low-bg);color:var(--low-text);display:flex;gap:9px;align-items:flex-start;font-size:var(--caption);line-height:1.35}
.low-battery b{color:var(--low-strong);white-space:nowrap}
.reconnect-guide{background:var(--tint);border:1px solid var(--accent);border-radius:10px;padding:14px;display:flex;align-items:flex-start;gap:10px;margin-top:12px;box-shadow:0 8px 20px var(--shadow-c)}
.reconnect-guide>span{width:27px;height:27px;border-radius:50%;background:#d86363;display:grid;place-items:center;font-size:17px;flex:none}
.reconnect-guide b{font-size:var(--body-label)}
.reconnect-guide p{font-size:var(--caption);color:var(--muted);line-height:1.45;margin-top:4px}
.reconnect-guide strong{color:var(--text)}
.reconnect-guide .sheet-close{margin-left:auto;font-size:24px}
.today-doses{margin-top:20px}
.today-dose-list{padding:0 14px}
.today-dose-row{display:grid;grid-template-columns:92px 1fr auto;gap:10px;align-items:center;padding:12px 0;border-bottom:1px solid var(--rule)}
.today-dose-row:last-child{border-bottom:0}
.today-dose-row time{font-size:var(--body-label);font-weight:700}
.today-dose-row b{display:block;font-size:var(--body-label)}
.today-dose-row .container-chip{margin-top:4px}
.today-dose-actions{display:flex;gap:6px}
.today-dose-actions .btn{padding:7px 12px}
.today-dose-actions .skip-dose{background:transparent;border:1px solid var(--missed);color:var(--skip-text)}
.today-dose-actions button:disabled{opacity:.48;cursor:not-allowed}
.home-timeline{margin-top:20px}
.today-empty{margin-top:22px;padding:22px 24px 30px}
.empty-state{display:flex;flex-direction:column;align-items:center;text-align:center;padding:4px 12px 0}
.empty-icon{width:96px;height:96px;border:2px dashed var(--rule-strong);border-radius:18px;display:grid;place-items:center;color:var(--subtle)}
.empty-icon svg{width:46px;height:46px;fill:none;stroke:currentColor;stroke-width:1.6;stroke-linecap:round;stroke-linejoin:round}
.empty-state h3{font-size:calc(var(--section-title) + 2px);font-weight:800;margin:16px 0 4px}
.empty-state p{color:var(--muted);font-size:var(--caption);margin-bottom:18px}
.home-summary-card>small::before,.home-summary-card .card-title small::before,.home-block .section-heading h2::before,.settings-card-head h2::before,.dash h3::before{content:"";flex:none;width:5px;height:1.15em;border-radius:3px;background:var(--accent-fill)}
.home-summary-card>small::before,.home-summary-card .card-title small::before{margin-right:10px;height:18px}
.home-block .section-heading h2,.settings-card-head h2,.dash h3{display:flex;align-items:center;gap:10px}
.home-block .section-heading p,.settings-card-head p{padding-left:15px}
.danger-zone .settings-card-head h2::before{background:var(--missed)}
.timeline-list{padding:0 14px}
.home-timeline-row{width:100%;padding:12px 0;background:none;border:0;border-bottom:1px solid var(--rule);color:var(--text);text-align:left;display:grid;grid-template-columns:96px 1fr auto;align-items:center;gap:8px}
.home-timeline-row:last-child{border:0}
.home-timeline-row time{font-size:var(--body-label);font-weight:700}
.home-timeline-row b{font-size:var(--body-label);display:block}
.home-timeline-row small{font-size:var(--caption);color:var(--muted);display:block;margin-top:2px}
.home-timeline-row em{font-style:normal;font-size:var(--caption);font-weight:700;text-align:right}
.timeline-upcoming{color:var(--accent)}
.timeline-taken{color:var(--ok)}
.timeline-late{color:var(--late)}
.timeline-missed{color:var(--miss)}

.home-hero{background:linear-gradient(115deg,var(--brand-700),var(--brand-600));border-radius:12px;padding:22px 24px;display:flex;justify-content:space-between;align-items:center;gap:18px;min-height:128px;box-shadow:0 10px 22px #0004}
.home-hero h1{font-size:var(--page-title);line-height:1.05;max-width:320px;margin:3px 0 8px}
.home-hero p:not(.eyebrow){font-size:var(--caption);line-height:1.35;max-width:385px;color:#e8fff7}
.eyebrow{font-size:var(--caption);letter-spacing:.1em;font-weight:700;color:#c6ffeb}
.home-taken{white-space:nowrap}
.home-top{display:grid;grid-template-columns:1.05fr 1fr;gap:14px;margin-top:14px}
.home-next{border:1px solid var(--accent);background:var(--card2);min-height:151px}
.next small{font-size:var(--caption);display:block;color:var(--muted)}
.home-next h2{font-size:var(--section-title);line-height:1.1;margin:5px 0}
.home-next p{font-size:var(--caption);color:var(--muted)}
.home-next .btn{margin-top:13px}
.home-edit{margin-left:0}
.home-device{min-height:151px}
.device-name{font-size:var(--caption);margin:12px 0 14px;color:var(--text)}
.stats{display:flex;justify-content:space-between;gap:8px}
.stats b{display:block;font-size:var(--body-label)}
.stats span{font-size:var(--caption);color:var(--muted)}
.home-slots{margin-top:22px}
.slot{text-align:center;padding:10px;cursor:pointer;background:var(--card);border-radius:8px;border:0;color:var(--text)}
.home-slot{text-align:left;padding:14px;min-height:148px;position:relative;border:1px solid transparent;transition:border-color .15s,transform .15s}
.home-slot:hover{border-color:var(--accent);transform:translateY(-2px)}
.slot-number{width:24px;height:24px;border-radius:50%;border:1px solid var(--accent);color:var(--accent);display:grid;place-items:center;font-size:var(--caption);font-weight:700;margin-bottom:12px}
.home-slot h3{font-size:var(--body-label);margin-bottom:8px}
.slot-time{display:block;font-size:var(--body-label);font-weight:700}
.slot-detail{display:block;color:var(--muted);font-size:var(--caption);margin-top:3px}
.slot-action{position:absolute;left:14px;bottom:14px;color:var(--accent);font-size:var(--caption);font-weight:700}
.alarm-home{max-width:620px;margin:auto}
.alarm-panel{background:linear-gradient(140deg,var(--brand-700),var(--tint));border-radius:12px;padding:16px 18px}
.alarm-row{width:100%;background:none;color:var(--text);padding:13px 0;border-bottom:1px solid var(--rule-strong);display:flex;align-items:center;gap:12px;text-align:left}
.alarm-time{min-width:118px;font-size:28px}
.alarm-time.unset{font-size:22px;color:var(--subtle)}
.alarm-name{margin-left:auto;font-size:var(--caption);font-weight:700}
.alarm-add{width:100%;font-size:var(--body-label);padding:12px}
.alarm-hint{font-size:var(--caption);color:var(--muted);text-align:center;margin:13px}

.schedule-tabs{display:grid;grid-template-columns:1fr 1fr;gap:10px;margin:14px 0 16px}
.schedule-tab{background:var(--card2);border:1px solid var(--rule);border-radius:8px;color:var(--muted);font-weight:700;padding:11px 14px;font-size:var(--body-label);min-height:44px}
.schedule-tab.on{background:var(--active);border-color:var(--accent);color:var(--on-accent)}
.schedule-empty{max-width:440px;min-height:250px;margin:32px auto 0;border:1px dashed var(--rule-strong);border-radius:14px;display:flex;flex-direction:column;align-items:center;justify-content:center;text-align:center;padding:28px;background:var(--card2)}
.schedule-empty h2{font-size:var(--section-title);margin:10px 0 7px}
.schedule-empty p{max-width:280px;color:var(--muted);font-size:var(--caption);line-height:1.4;margin-bottom:18px}
.empty-plus{width:42px;height:42px;border-radius:50%;display:grid;place-items:center;background:var(--active);color:var(--on-accent);font-size:28px}
.schedule-back{position:fixed;inset:0;background:var(--overlay);z-index:20;overflow:auto;padding:24px 16px}
.schedule-editor{width:min(760px,100%);margin:26px auto;background:var(--bg);border:1px solid var(--rule);border-radius:16px;padding:18px;box-shadow:0 20px 50px var(--shadow-c)}
.editor-head{display:flex;align-items:flex-start;justify-content:space-between;gap:12px;margin-bottom:14px}
.editor-head h2{font-size:var(--section-title)}
.editor-head p{font-size:var(--caption);color:var(--muted);margin-top:4px}
.editor-grid{display:grid;grid-template-columns:1fr 1fr;gap:16px;align-items:start}
.schedule-day-card{margin:0 0 14px}
.schedule-day-list{margin-top:10px}
.day-h{display:flex;justify-content:space-between;align-items:flex-start}
.day-h h3{font-size:var(--body-label)}
.day-h p{font-size:var(--caption);font-weight:700;margin-top:2px}
.schedule-row{display:grid;grid-template-columns:92px 1fr auto auto;gap:10px;align-items:center;width:100%;padding:11px 0;border:0;border-bottom:1px solid var(--rule);background:none;color:var(--text);text-align:left}
.schedule-row:last-child{border-bottom:0}
.schedule-row time{font-size:var(--body-label);font-weight:600}
.schedule-row b{font-size:var(--body-label);font-weight:600;line-height:1.2;display:block}
.schedule-row small{font-size:var(--caption);color:var(--muted);display:block;margin-top:3px}
.schedule-row .tg{padding:0}
.schedule-row .row-edit{background:none;color:var(--accent);font-size:var(--caption);font-weight:700;padding:5px 1px;min-height:44px}
.row{display:flex;align-items:center;justify-content:space-between;padding:10px 0;border-bottom:1px solid var(--rule);cursor:pointer;background:none;width:100%;text-align:left;color:var(--text)}
.row .t{font-size:26px;color:var(--text)}
.row .t.ns{color:var(--subtle)}
.row .r{display:flex;align-items:center;gap:14px;font-size:var(--caption);font-weight:700}
.row.edit .t{text-decoration:underline;text-decoration-color:var(--accent)}
.ed{font-size:var(--caption);margin:12px 0 4px;display:flex;justify-content:space-between;align-items:center}
.ed label{display:flex;gap:4px;align-items:center}
.dose-actions{display:flex;flex-wrap:wrap;gap:8px 10px;align-items:center;margin-top:auto}
.dose-actions>:not(button){flex-basis:100%;margin:0;text-align:left;font-weight:400;font-size:var(--caption);line-height:1.35;color:var(--muted)}
.row-main{background:none;border:0;color:var(--text);text-align:left;padding:0;min-height:44px}
.sheet h2{font-size:var(--section-title);margin-bottom:4px}
.sync-needed{margin-top:12px;color:var(--late);font-size:var(--caption);font-weight:700}

.calendar-header{display:flex;justify-content:space-between;align-items:center;gap:8px;margin:18px 0 12px}
.calendar-actions{display:flex;align-items:center;gap:7px}
.calendar-grid{display:grid;grid-template-columns:repeat(7,1fr);gap:5px}
.calendar-grid .dow{text-align:center;color:var(--muted);font-size:var(--caption);padding:7px 0}
.calendar-day{min-height:82px;background:var(--inset);border:1px solid var(--border);border-radius:7px;color:var(--text);padding:6px;text-align:left;position:relative;font-size:var(--body-label)}
.calendar-day:hover{border-color:var(--brand-500);background:var(--tint-2)}
.calendar-day.selected{border-color:var(--accent);box-shadow:inset 0 0 0 1px var(--accent);background:var(--tint-2)}
.calendar-day.today{border-color:var(--accent);box-shadow:inset 0 0 0 1px var(--accent)}
.calendar-day.today .day-number{display:inline-grid;place-items:center;width:28px;height:28px;background:var(--accent-fill);color:var(--on-accent);border-radius:50%}
.calendar-dot{position:absolute;left:50%;bottom:8px;width:5px;height:5px;margin-left:-2px;border-radius:50%;background:var(--late)}
.calendar-blank{min-height:82px}
.calendar-note{display:block;color:var(--muted);font-size:var(--caption);margin-top:9px}
.calendar-chip{display:block;background:#8a3fa5;color:#fff;border-radius:4px;padding:3px 4px;margin-top:4px;font-size:var(--caption);white-space:nowrap;overflow:hidden;text-overflow:ellipsis}
.calendar-add{position:fixed;right:30px;bottom:30px;width:60px;height:60px;border-radius:18px;background:var(--brand-600);color:var(--on-accent);font-size:36px;z-index:3}
.calendar-day.status-ok{background:var(--st-ok)}
.calendar-day.status-late{background:var(--st-late)}
.calendar-day.status-missed{background:var(--st-missed)}
.calendar-day.status-future{background:var(--st-future)}
.calendar-day.status-pending{background:var(--inset)}
.calendar-status-dot{position:absolute;left:50%;bottom:8px;width:8px;height:8px;margin-left:-4px;border-radius:50%;background:transparent}
.status-ok .calendar-status-dot{background:var(--ok)}
.status-late .calendar-status-dot{background:var(--late)}
.status-missed .calendar-status-dot{background:var(--miss)}
.status-future .calendar-status-dot{background:var(--subtle)}
.calendar-legend{display:flex;gap:12px;flex-wrap:wrap;margin-top:10px;font-size:var(--caption);color:var(--muted)}
.calendar-legend span{display:flex;align-items:center;gap:5px}
.calendar-legend i{width:10px;height:10px;border-radius:50%;display:inline-block}
.calendar-empty{font-size:var(--caption);color:var(--muted);padding:6px 0}

.cal-h{display:flex;justify-content:space-between;align-items:center;margin-bottom:8px;font-weight:700;font-size:var(--caption)}
.arrow{width:44px;height:44px;border-radius:50%;border:1px solid var(--accent);background:none;color:var(--accent);line-height:1}
.cal{display:grid;grid-template-columns:repeat(7,1fr);text-align:center;gap:2px;font-size:var(--caption)}
.cal .dow{font-size:var(--caption);color:var(--muted);padding:4px 0}
.cal button{background:none;color:var(--text);height:36px;width:36px;margin:0 auto;border-radius:50%;position:relative}
.cal button.today{border:1px solid var(--accent)}
.cal button.sel{background:var(--active);color:var(--on-accent);font-weight:700}
.cal button.dot::after{content:"";position:absolute;left:50%;bottom:2px;width:4px;height:4px;margin-left:-2px;border-radius:50%;background:var(--late)}
.cal-f{border-top:1px solid var(--rule);margin-top:12px;padding-top:12px;display:flex;gap:10px;flex-wrap:wrap}
.cal-f .btn{border-radius:20px}
.pop{display:none;margin-top:12px;gap:10px;flex-wrap:wrap}
.pop.on{display:flex}

.sheet{width:min(530px,100%);min-height:70vh;margin:4vh auto;background:var(--inset);border-radius:24px 24px 14px 14px;padding:16px 20px 26px}
.sheet-grab{height:5px;width:48px;background:var(--subtle);border-radius:5px;margin:0 auto 16px}
.sheet-head{display:flex;justify-content:space-between;align-items:center;margin-bottom:22px}
.sheet-close{background:none;color:var(--muted);font-size:32px;min-width:44px;min-height:44px}
.sheet-save{background:var(--accent-fill);color:var(--on-accent);border-radius:28px;padding:13px 25px;font-weight:700}
.sheet-title{width:100%;background:none;border:0;border-bottom:1px solid var(--border);padding:10px 0;color:var(--text);font-size:27px;margin-bottom:18px}
.sheet-slots{display:flex;gap:8px;margin-bottom:20px}
.sheet-slot{flex:1;background:var(--inset-2);border:1px solid var(--rule-strong);color:var(--muted);border-radius:8px;padding:10px 6px;font-size:var(--caption);min-height:44px}
.sheet-slot.on{background:var(--active);color:var(--on-accent)}
.sheet-line{display:flex;align-items:center;justify-content:space-between;flex-wrap:wrap;gap:12px;padding:15px 0;border-top:1px solid var(--border)}
.sheet-line small{display:block;color:var(--muted);font-size:var(--caption);margin-top:2px}
.sheet-line .field{margin:0;width:auto;min-width:145px;padding:8px}
.preset-times{display:flex;gap:6px;flex-wrap:wrap;justify-content:flex-end}
.preset-time{background:var(--inset-2);border:1px solid var(--rule-strong);color:var(--accent);border-radius:999px;padding:6px 10px;font-size:var(--caption);font-weight:700;min-height:44px}
.repeat-days{display:grid;grid-template-columns:repeat(7,minmax(0,1fr));gap:6px;flex:1 1 290px;max-width:340px;margin-left:auto}
.day-chip{position:relative;background:transparent;border:1px solid var(--rule-strong);color:var(--muted);border-radius:12px;padding:6px 2px;font-size:var(--caption);font-weight:700;min-width:0;min-height:44px;white-space:nowrap;text-align:center}
.day-chip.on{background:var(--accent-fill);border-color:var(--accent);color:var(--on-accent)}
.sheet-delete{display:block;background:transparent;color:var(--danger-text);border:2px solid var(--danger-text);border-radius:10px;width:100%;padding:13px;margin-top:22px;font-size:var(--body-label);font-weight:700;min-height:44px}
.sheet-delete:hover{background:var(--danger-bg);color:var(--danger-hover-text)}

.timer-centered{max-width:500px;margin:0 auto}
.timer-list{display:grid;gap:9px}
.timer-choice{width:100%;display:flex;align-items:center;justify-content:space-between;background:var(--card2);border:1px solid var(--rule);border-radius:8px;padding:13px;color:var(--text);text-align:left}
.timer-choice.on{border-color:var(--accent);background:var(--tint-2)}
.timer-choice b{font-size:var(--body-label)}
.timer-choice span{color:var(--accent);font-size:var(--body-label);font-weight:700}
.timer-choice small{display:block;color:var(--muted);font-size:var(--caption);margin-top:3px}
.timer-screen{background:var(--card);min-height:500px;padding:24px 20px 28px;border:1px solid var(--rule);border-radius:14px;color:var(--text);box-shadow:0 10px 22px var(--shadow-c)}
.timer-title{font-size:25px;font-weight:700;margin:0 0 5px;letter-spacing:-.3px}
.timer-help{font-size:var(--caption);color:var(--muted);line-height:1.4;margin-bottom:20px}
.timer-container-label{display:block;font-size:var(--caption);font-weight:700;margin-bottom:16px}
.timer-container-label .field{margin:6px 0 0}
.timer-ring{--p:0%;width:214px;height:214px;border-radius:50%;margin:7px auto 20px;background:conic-gradient(var(--accent) var(--p),var(--ring-track) 0);padding:10px;display:grid;place-items:center;transition:background .2s}
.timer-ring-inner{width:100%;height:100%;border-radius:50%;background:var(--card2);display:grid;place-items:center;text-align:center;box-shadow:inset 0 0 0 1px var(--line)}
.timer-value{color:var(--text);font-size:36px;font-weight:700;line-height:1;white-space:nowrap;letter-spacing:1px}
.timer-value small{font-size:var(--caption);font-weight:700;margin-left:2px;color:var(--brand-300);letter-spacing:0}
.timer-presets{display:flex;justify-content:center;gap:7px;flex-wrap:wrap;margin:0 0 18px}
.timer-preset{background:var(--card2);border:1px solid var(--rule);color:var(--accent);border-radius:999px;padding:8px 14px;font-size:var(--caption);font-weight:700;min-height:44px}
.timer-preset.on{background:var(--active);border-color:var(--accent);color:var(--on-accent)}
.timer-custom{max-width:160px;margin:0 auto 18px;text-align:center}
.timer-custom .field{text-align:center;margin:0}
.timer-hms{display:grid;grid-template-columns:repeat(3,minmax(0,1fr));gap:10px;max-width:360px;margin:0 auto 18px}
.timer-hms label{display:grid;gap:6px;font-size:var(--caption);font-weight:700;color:var(--muted);text-align:center}
.timer-hms .field{text-align:center;margin:0;padding:12px 6px;font-size:22px;font-weight:700}
.timer-hms .field:disabled{opacity:.5}
.timer-value.long{font-size:32px}
.timer-controls{display:flex;justify-content:center;align-items:center;gap:14px}
.timer-set{background:transparent;color:var(--accent);border:1px solid var(--accent);border-radius:22px;padding:11px 16px;font-size:var(--caption);font-weight:700;min-height:44px}
.timer-set:hover{background:var(--card2)}
.timer-set:disabled{opacity:.45;cursor:not-allowed}
.timer-play,.timer-play.running{width:68px;height:68px;border-radius:50%;background:var(--accent-fill);color:var(--on-accent);font-size:25px;display:grid;place-items:center;padding-left:2px;box-shadow:0 0 0 3px var(--tint-2)}
.timer-note{text-align:center;color:var(--muted);font-size:var(--caption);margin-top:17px;min-height:14px}
.timer-preview{margin-top:10px;text-align:center;color:var(--accent);font-size:21px;font-weight:700}

.sync-time{width:100%;margin:14px 0 0}
.time-format{display:flex;align-items:center;gap:8px;margin-top:10px;padding:9px 10px;background:var(--card2);border:1px solid var(--rule);border-radius:8px;font-size:var(--caption)}
.time-format>span{margin-right:auto;color:var(--muted);font-weight:700}
.format-choice{min-width:76px;min-height:44px;background:var(--inset);border:1px solid var(--rule);border-radius:7px;padding:5px 8px;color:var(--muted);font-size:var(--caption);font-weight:700;line-height:1.1}
.format-choice small{font-size:var(--caption);font-weight:400}
.format-choice.on{background:var(--active);border-color:var(--accent);color:var(--on-accent)}
.picker-back{position:fixed;inset:0;background:var(--overlay);display:grid;place-items:center;padding:16px;z-index:8}
.picker{width:min(470px,100%);background:var(--inset-2);border:1px solid var(--rule);border-radius:16px;padding:18px;box-shadow:0 20px 50px var(--shadow-c)}
.picker h2{font-size:var(--section-title);margin-bottom:4px}
.picker p{font-size:var(--caption);color:var(--muted);margin-bottom:16px}
.wheel{display:grid;grid-template-columns:1fr 18px 1fr 1fr;align-items:center;gap:8px;background:var(--inset);border-radius:12px;padding:10px}
.wheel24{grid-template-columns:1fr 18px 1fr}
.wheel select{height:160px;background:var(--inset);border:0;color:var(--text);text-align:center;font-size:27px;font-weight:700;appearance:auto}
.wheel b{font-size:26px;text-align:center}
.wheel select:focus{outline:1px solid var(--accent)}
.picker-comp{margin-top:14px}
.picker-actions{display:flex;gap:10px;justify-content:flex-end;margin-top:16px}
.picker-actions .btn{min-width:92px}

.dash{display:grid;grid-template-columns:1fr 1fr;gap:16px;align-items:start}
.dash h3{font-size:var(--body-label);margin-bottom:8px}
.dash-summary{min-height:134px}
.dash-chart,.dash-log{grid-column:1/-1}
.dash-chart{min-height:174px}
.dash-actions{display:flex;justify-content:flex-end;margin-bottom:10px}
.adh{display:flex;gap:12px;align-items:center}
.ring{width:60px;height:76px;flex:none;position:relative;display:grid;place-items:center}
.ring::before{content:"";width:56px;height:56px;border-radius:50%;background:conic-gradient(var(--active) var(--p,0%),var(--ring-track) 0)}
.ring span{position:absolute;font-size:var(--caption);font-weight:700;background:var(--card);width:44px;height:44px;border-radius:50%;display:grid;place-items:center}
.adh b{font-size:var(--body-label);display:block}
.adh small{font-size:var(--caption);display:block;margin-top:3px;line-height:1.3}
.streak-number{font-size:31px;font-weight:700;color:var(--accent);line-height:1}
.streak-copy{font-size:var(--caption);color:var(--muted);line-height:1.35;margin-top:7px}
.week{display:flex;justify-content:space-between;align-items:flex-end;height:110px;padding:4px 4px 0}
.wd{display:flex;flex-direction:column;align-items:center;gap:5px;font-size:var(--caption);color:var(--muted);font-weight:700}
.wd.today{color:var(--accent)}
.wd.today span{background:var(--active);color:var(--on-accent);border-radius:999px;padding:3px 8px;margin:-3px 0}
.bar{width:32px;height:68px;border-radius:5px;overflow:hidden;display:flex;flex-direction:column;gap:1px;background:var(--ring-track)}
.bar i{flex:1;display:grid;place-items:center;font-style:normal;font-size:12px;font-weight:700;color:var(--on-accent)}
.week-empty .bar{opacity:.35;background:repeating-linear-gradient(135deg,var(--line) 0 5px,var(--track) 5px 10px)}
.empty-chart-copy{text-align:center;color:var(--muted);font-size:var(--caption);margin-top:8px}
.legend{font-size:var(--caption);display:flex;gap:10px;margin-top:7px}
.s-on_time{background:var(--ok)}
.s-late{background:var(--late)}
.s-missed{background:var(--miss)}
.k-on_time{color:var(--ok)}
.k-late{color:var(--late)}
.k-missed{color:var(--miss)}
.log{margin-top:0}
.dash-log .alarm-hint{text-align:left;display:flex;align-items:flex-start;gap:9px;line-height:1.45}
.dash-log .alarm-hint::before{content:'◷';width:26px;height:26px;border-radius:50%;background:var(--card2);border:1px solid var(--rule);color:var(--accent);display:grid;place-items:center;flex:none;font-size:15px}
.lr{display:flex;align-items:center;gap:10px;padding:10px 0;border-bottom:1px solid var(--rule)}
.lr:last-child{border:0}
.dotc{width:18px;height:18px;border-radius:50%;background:var(--none);display:grid;place-items:center;font-size:12px;font-weight:700;color:var(--on-accent);flex:none}
.lr div{flex:1}
.lr b{font-size:var(--body-label);display:block}
.lr small{font-size:var(--caption)}
.lr .st{font-size:var(--caption);font-weight:700}

.settings-index{position:sticky;top:10px;z-index:4;display:flex;gap:7px;flex-wrap:wrap;margin:12px 0 16px;padding:9px 10px;background:var(--bg);background:color-mix(in srgb,var(--bg) 94%,transparent);border:1px solid var(--border);border-radius:10px;-webkit-backdrop-filter:blur(8px);backdrop-filter:blur(8px)}
.settings-index a{color:var(--accent);font-size:var(--caption);font-weight:700;text-decoration:none;padding:9px 10px;border-radius:999px}
.settings-index a:hover{background:var(--active);color:var(--on-accent)}
#settings .card{max-width:none}
#settings .time-format{margin-top:12px}
.settings-card{margin-top:16px;scroll-margin-top:72px}
.settings-card-head{margin-bottom:2px}
.settings-card-head h2{font-size:var(--section-title)}
.settings-card-head p{margin-top:4px;color:var(--muted);font-size:var(--caption);line-height:1.4}
.settings-line{display:flex;align-items:center;justify-content:space-between;gap:14px;padding:13px 0;border-top:1px solid var(--rule)}
.settings-line:first-of-type{border-top:0}
.settings-line b{font-size:var(--body-label);display:block}
.settings-line small{display:block;color:var(--muted);font-size:var(--caption);line-height:1.35;margin-top:3px}
.settings-line .field{width:auto;min-width:136px;margin:0;padding:8px}
.settings-line select.field{font-size:var(--body-label);line-height:1.25}
.settings-line.clock-style{background:none;border:0;border-radius:0;margin:0;padding:13px 0;border-top:1px solid var(--rule)}
.clock-style .clock-controls{display:flex;gap:8px;flex-wrap:wrap;justify-content:flex-end}
.settings-actions{display:flex;gap:8px;flex-wrap:wrap;margin-top:12px}
.info-callout{display:flex;gap:10px;background:var(--tint);border:1px solid var(--accent);border-radius:10px;padding:13px;margin-top:16px}
.info-callout i{font-style:normal;background:var(--accent-fill);color:var(--on-accent);width:24px;height:24px;border-radius:50%;display:grid;place-items:center;font-weight:700;flex:none}
.info-callout b{font-size:var(--body-label)}
.info-callout p{font-size:var(--caption);color:var(--muted);line-height:1.4;margin-top:3px}
.danger-zone{border:1px solid var(--missed)}
.danger-zone h2{color:var(--danger-text)}
.danger-btn{background:var(--danger-fill);color:#fff;border:1px solid var(--danger-fill)}
.version{color:var(--muted);font-size:var(--caption)}
.swatches{display:flex;gap:6px;flex-wrap:wrap;justify-content:flex-end}
.swatch{width:44px;height:44px;border-radius:50%;background:none;display:grid;place-items:center;position:relative}
.swatch::before{content:"";width:30px;height:30px;border-radius:50%;background:var(--sw);box-shadow:inset 0 0 0 1px #0003}
.swatch[aria-pressed="true"]::before{box-shadow:0 0 0 3px var(--card),0 0 0 5px var(--sw)}
.swatch[aria-pressed="true"]::after{content:"\2713";position:absolute;color:#fff;font-weight:700;font-size:16px;text-shadow:0 1px 2px #0008}
.theme-hint{margin-top:4px;color:var(--muted);font-size:var(--caption)}
.medicine-heading{display:grid;grid-template-columns:110px 1.4fr .7fr .7fr;gap:7px;align-items:center;padding:10px 0 6px;color:var(--muted);font-size:var(--caption);font-weight:700}
.medicine-heading span:first-child{color:var(--text)}
.medicine-row{display:grid;grid-template-columns:110px 1.4fr .7fr .7fr;gap:7px;align-items:center;padding:10px 0;border-top:1px solid var(--rule)}
.medicine-row b{font-size:var(--caption)}
.medicine-row .field{min-width:0;width:100%;margin:0;padding:8px;font-size:var(--caption)}
.medicine-row small{grid-column:2/-1;color:var(--muted);font-size:var(--caption)}
.medicine-row small.stock-low{color:var(--late);font-weight:700}

.test-buttons{display:grid;grid-template-columns:1fr 1fr;gap:10px;margin-top:12px}
.test-btn-state{border:1.5px solid var(--rule-strong);border-radius:12px;padding:14px;text-align:center;background:var(--card2);display:grid;gap:4px}
.test-btn-state span{font-size:var(--caption);font-weight:700;color:var(--muted)}
.test-btn-state b{font-size:var(--body-label)}
.test-btn-state small{font-size:var(--caption);color:var(--muted)}
.test-btn-state.down{background:var(--accent-fill);border-color:var(--accent-fill);color:var(--on-accent)}
.test-btn-state.down span,.test-btn-state.down small{color:var(--on-accent)}

@media(max-width:700px){
body{flex-direction:column;padding-bottom:calc(64px + env(safe-area-inset-bottom,0px))}
main{padding:16px 16px 22px}
.wrap,#settings,.calendar-shell{width:100%}
.card{padding:16px}
.home-summary-card{padding:18px 18px}
body>nav{position:fixed;left:0;right:0;bottom:0;z-index:10;width:100%;min-height:0;flex-direction:row;justify-content:space-around;gap:8px;padding:6px 6px calc(6px + env(safe-area-inset-bottom,0px));border:0;border-top:1px solid var(--card-border);border-radius:0;box-shadow:0 -8px 22px var(--shadow-c)}
:root{--page-title:28px}
body>nav button svg{display:block}
.logo{display:none}
body>nav button{flex:1;min-height:52px;flex-direction:column;justify-content:center;gap:3px;text-align:center;padding:6px 4px;font-size:var(--caption);font-weight:600}
.grid2,.dash{grid-template-columns:1fr}
.home-head{align-items:center}
.home-summary{grid-template-columns:1fr}
.home-summary-card{min-height:132px}
.home-timeline-row{grid-template-columns:84px 1fr auto}
.today-dose-row{grid-template-columns:70px 1fr}
.today-dose-actions{grid-column:2;justify-content:flex-start}
.editor-grid{grid-template-columns:1fr}
.timer-screen{min-height:calc(100vh - 125px);min-height:calc(100dvh - 125px);padding-top:30px}
.timer-appbar{margin-bottom:62px}
.timer-value{font-size:36px}
.timer-near{font-size:27px}
.timer-set{padding:12px 20px}
.timer-play,.timer-play.running{width:68px;height:68px}
.cal-f{gap:12px}
.calendar-day,.calendar-blank{min-height:68px}
.calendar-day{padding:4px}
.calendar-chip{padding:2px}
.calendar-grid{gap:3px}
.calendar-add{right:18px;bottom:calc(78px + env(safe-area-inset-bottom,0px))}
.calendar-actions{gap:4px}
.calendar-header .btn.line{padding:6px 8px}
.alarm-time{min-width:105px;font-size:25px}
.schedule-row{grid-template-columns:84px 1fr auto;gap:7px}
.schedule-row .row-edit{display:none}
.container-chip{padding:3px 6px}
.settings-line{align-items:flex-start;flex-direction:column}
.settings-line .field{width:100%}
.settings-line .toggle-label{align-self:flex-end}
.settings-line.clock-style .clock-controls{width:100%;justify-content:flex-start}
.swatches{justify-content:flex-start}
.settings-index{top:6px;flex-wrap:nowrap;overflow-x:auto}
.settings-index a{white-space:nowrap}
.medicine-heading{display:none}
.medicine-row{grid-template-columns:1fr 1fr}
.medicine-row b,.medicine-row small{grid-column:1/-1}
.medicine-row .field:first-of-type{grid-column:1/-1}
.schedule-back{display:flex;align-items:flex-end;padding:0;overflow:hidden}
.schedule-editor,.sheet{width:100%;min-height:0;max-height:92vh;max-height:92dvh;margin:0;padding:14px 16px calc(28px + env(safe-area-inset-bottom,0px));border-radius:22px 22px 0 0;overflow-y:auto;overscroll-behavior:contain;-webkit-overflow-scrolling:touch;animation:sheet-up .22s ease-out}
.sheet-head{position:sticky;top:0;z-index:2;background:var(--inset);margin:0 -16px 14px;padding:10px 16px}
}
@keyframes sheet-up{from{transform:translateY(100%)}to{transform:translateY(0)}}

@media(prefers-reduced-motion:reduce){*,*::before,*::after{animation:none!important;transition:none!important;scroll-behavior:auto!important}})CSS";