//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock, NSString;

@interface MCssParser : NSObject
{
    id <MCssParserDelegate> m_delegate;
    NSRecursiveLock *m_oLock;
    NSString *m_currentFile;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCssParser;
+ (void)initialize;
- (void).cxx_destruct;
- (void)startWithDelegate:(id)arg1;
- (BOOL)isParsing;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)onCssRuleSetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onParseErrorOnLineNumber:(id)arg1 withText:(id)arg2 withErrorMessage:(id)arg3;
- (BOOL)onParseNextFile;
- (void)startParseCssFiles;
- (void)cleanUpLexer;
- (BOOL)openNextCssFile;
- (void)safeCloseCssFile;
- (id)init;

@end

