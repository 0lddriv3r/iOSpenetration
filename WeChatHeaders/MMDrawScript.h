//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCssParserDelegate.h"

@class NSMutableDictionary, NSString;

@interface MMDrawScript : NSObject <MCssParserDelegate>
{
    NSMutableDictionary *m_drawScripts;
    BOOL m_isAlreadyParsed;
    BOOL m_isParseOK;
    BOOL m_isParseError;
    NSString *m_scriptFilePath;
}

@property(retain, nonatomic) NSString *m_scriptFilePath; // @synthesize m_scriptFilePath;
@property(nonatomic) BOOL m_isParseError; // @synthesize m_isParseError;
@property(nonatomic) BOOL m_isParseOK; // @synthesize m_isParseOK;
@property(nonatomic) BOOL m_isAlreadyParsed; // @synthesize m_isAlreadyParsed;
@property(retain, nonatomic) NSMutableDictionary *m_drawScripts; // @synthesize m_drawScripts;
- (void).cxx_destruct;
- (void)clearAllScripts;
- (BOOL)loadScriptsFromPath:(id)arg1;
- (BOOL)startParse;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)setDrawFunctionByName:(id)arg1 withFunction:(id)arg2;
- (id)getDrawFunctionByName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
