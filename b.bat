@echo off

%WINDIR%\Microsoft.NET\Framework\v4.0.30319\MSBuild.exe %* /p:Configuration=Release
