//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt.h"
#import "IMMRegionPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableArray, NSString, SafeDictionaryWrap;

@interface MMRegionCodeMgr : MMService <MMService, IMMRegionPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    SafeDictionaryWrap *m_regionDict;
    NSMutableArray *m_pickedRegionAry;
}

+ (int)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
+ (id)encodeCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void).cxx_destruct;
- (BOOL)isProvinceMO:(id)arg1;
- (BOOL)isProvinceHK:(id)arg1;
- (BOOL)isProvinceTW:(id)arg1;
- (BOOL)isCountryMO:(id)arg1;
- (BOOL)isCountryHK:(id)arg1;
- (BOOL)isCountryTW:(id)arg1;
- (BOOL)isZhCN:(id)arg1;
- (void)removePickedResult;
- (id)getPickedResult;
- (void)popupData;
- (void)pushData:(id)arg1;
- (void)onLanguageChange;
- (void)onRegionPackageUpdated;
- (BOOL)saveStirng:(id)arg1 toFileForLang:(id)arg2;
- (id)readRegionCodeFileForLang:(id)arg1;
- (void)trySplitRegionCodeFile:(id)arg1 Lang:(id)arg2 force:(BOOL)arg3;
- (void)splitRegionCodeFile:(id)arg1 Lang:(id)arg2;
- (id)getRegionCodeLangForCurLang:(id)arg1;
- (id)getChildrenOfCode:(id)arg1;
- (id)getCountries;
- (id)getRegionCodeFromString:(id)arg1 type:(int)arg2;
- (id)getRegionForCode:(id)arg1;
- (id)getValueForKey:(id)arg1;
- (id)getDisplayRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)dealloc;
- (void)setRegionDictForCurLang;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

