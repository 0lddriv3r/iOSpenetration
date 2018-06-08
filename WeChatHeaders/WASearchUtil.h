//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WASearchUtil : MMObject
{
}

+ (id)decodeWidgetAppIdFromSceneNote:(id)arg1;
+ (unsigned long)decodeCoreIdFromWidgetId:(id)arg1;
+ (unsigned long)decodeCoreIdFromSceneNote:(id)arg1;
+ (id)decodedQueryOfUrl:(id)arg1;
+ (id)pathOfUrl:(id)arg1;
+ (unsigned long)uint32ForKey:(id)arg1 inParam:(id)arg2;
+ (unsigned long long)uint64ForKey:(id)arg1 inParam:(id)arg2;
+ (BOOL)shouldStickySearchBar;
+ (void)removeWeAppUpdatedH5;
+ (id)makeDictionaryFromPath:(id)arg1;
+ (void)reloadDownloadConfig;
+ (void)reloadDefaultConfig;
+ (unsigned long)getVersionForUpdateH5;
+ (unsigned long)getVersionForDefaultH5;
+ (id)dirForWeAppUpdatedSearchH5;
+ (id)pathForUpdatedH5;
+ (id)pathForDefaultH5;
+ (id)dirForDefaultH5;
+ (unsigned long)getVersion;
+ (BOOL)applyToDevelopH5:(id)arg1;
+ (BOOL)deleteDevelopH5;
+ (BOOL)isUseDevelopH5;
+ (unsigned long)getVersionForDevelopH5;
+ (BOOL)verifyDevelopH5;
+ (id)pathForDevelopH5;
+ (id)pathForDevelopH5Dir;
+ (id)pathForWeAppSearchDir;
+ (id)pathForIOS8WKH5;
+ (id)pathForWeAppSearchH5;

@end

