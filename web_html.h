#pragma once
#include <pgmspace.h>
const char WEB_HTML[] PROGMEM = R"HTML(<!DOCTYPE html>
<html lang="en" data-theme="light" data-accent="red">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
<meta name="color-scheme" content="light dark">
<meta name="theme-color" content="#fafafa">
<title>SmartPill</title>
<link rel="icon" href="data:,">
<script>(function(){try{var t=JSON.parse(localStorage.getItem('smartpill-theme'))||{},r=document.documentElement;r.setAttribute('data-theme',t.mode==='dark'?'dark':'light');r.setAttribute('data-accent',/^(red|blue|green|purple|orange|teal)$/.test(t.accent)?t.accent:'red');}catch(e){}})();</script>
<link rel="stylesheet" href="style.css?v=7">
</head>
<body>

<nav aria-label="Main">
  <div class="logo">Smart<span>Pill</span></div>
  <button data-v="home" class="on" aria-current="page"><svg aria-hidden="true" viewBox="0 0 24 24"><path d="m3 10 9-7 9 7v10a1 1 0 0 1-1 1h-5v-6H9v6H4a1 1 0 0 1-1-1z"/></svg><span>Home</span></button>
  <button data-v="schedule"><svg aria-hidden="true" viewBox="0 0 24 24"><rect x="3" y="4" width="18" height="17" rx="2"/><path d="M8 2v4M16 2v4M3 10h18M8 14h.01M12 14h.01M16 14h.01M8 18h.01M12 18h.01"/></svg><span>Schedule</span></button>
  <button data-v="dash"><svg aria-hidden="true" viewBox="0 0 24 24"><path d="M3 3v18h18"/><path d="m7 16 4-5 3 3 5-7"/></svg><span>Dashboard</span></button>
  <button data-v="settings"><svg aria-hidden="true" viewBox="0 0 24 24"><circle cx="12" cy="12" r="3"/><path d="M19.4 15a1.7 1.7 0 0 0 .34 1.88l.06.06-2.12 2.12-.06-.06a1.7 1.7 0 0 0-1.88-.34 1.7 1.7 0 0 0-1.04 1.56V20h-3v-.08A1.7 1.7 0 0 0 10.66 18a1.7 1.7 0 0 0-1.88.34l-.06.06L6.6 16.28l.06-.06A1.7 1.7 0 0 0 7 14.34a1.7 1.7 0 0 0-1.56-1.04H5v-3h.08A1.7 1.7 0 0 0 7 9.26a1.7 1.7 0 0 0-.34-1.88L6.6 7.32 8.72 5.2l.06.06a1.7 1.7 0 0 0 1.88.34A1.7 1.7 0 0 0 11.7 4.04V4h3v.08A1.7 1.7 0 0 0 15.74 6a1.7 1.7 0 0 0 1.88-.34l.06-.06 2.12 2.12-.06.06A1.7 1.7 0 0 0 19.4 9.66a1.7 1.7 0 0 0 1.56 1.04H21v3h-.08A1.7 1.7 0 0 0 19.4 15Z"/></svg><span>Settings</span></button>
</nav>

<main><div class="wrap">
  <section id="home"></section>
  <section id="schedule"></section>
  <section id="dash"></section>
  <section id="settings"></section>
</div></main>

<div id="toast" role="status" aria-live="polite"></div>

<script src="app.js?v=7"></script>
</body>
</html>)HTML";