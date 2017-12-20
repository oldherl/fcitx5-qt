//
// Copyright (C) 2012~2017 by CSSlayer
// wengxt@gmail.com
//
// This library is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 2.1 of the
// License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; see the file COPYING. If not,
// see <http://www.gnu.org/licenses/>.
//
#include "main.h"
#include "editor.h"
#include "model.h"

QuickPhraseEditorPlugin::QuickPhraseEditorPlugin(QObject *parent)
    : fcitx::FcitxQtConfigUIPlugin(parent) {}

fcitx::FcitxQtConfigUIWidget *
QuickPhraseEditorPlugin::create(const QString &key) {
    Q_UNUSED(key);
    return new fcitx::ListEditor;
}

QStringList QuickPhraseEditorPlugin::files() {
    return QStringList("data/QuickPhrase.mb");
}

QString QuickPhraseEditorPlugin::name() { return "quickphrase-editor"; }

QString QuickPhraseEditorPlugin::domain() { return "fcitx"; }