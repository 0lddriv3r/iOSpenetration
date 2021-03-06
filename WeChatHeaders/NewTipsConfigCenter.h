//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NewTipsConfigCenter : NSObject
{
    NSMutableDictionary *_dictNewTipsConfig;
}

@property(retain, nonatomic) NSMutableDictionary *dictNewTipsConfig; // @synthesize dictNewTipsConfig=_dictNewTipsConfig;
- (void).cxx_destruct;
- (id)GetPathOfNewTipsConfig;
- (id)GetRootPathOfNewTips;
- (id)getConfigWithId:(unsigned long)arg1 Version:(unsigned long)arg2 Key:(id)arg3 Type:(unsigned int)arg4 FilterClass:(id)arg5 Path:(id)arg6;
- (void)syncConfigsToFile;
- (void)registerTipsWithId:(unsigned long)arg1 Version:(unsigned long)arg2 Key:(id)arg3 Type:(unsigned int)arg4 FilterClass:(id)arg5 Path:(id)arg6;
- (void)registerInteractiveTipsWithId:(unsigned long)arg1 FilterClass:(id)arg2 Path:(id)arg3;
- (void)registerInteractiveWithId:(unsigned long)arg1;
- (void)registerDynamicTipsWithId:(unsigned long)arg1 FilterClass:(id)arg2 Path:(id)arg3;
- (void)registerDynamicTipsWithId:(unsigned long)arg1;
- (void)registerLocalTipsWithId:(unsigned long)arg1 Version:(unsigned long)arg2 Key:(id)arg3 FilterClass:(id)arg4 Path:(id)arg5;
- (void)registerLocalTipsWithId:(unsigned long)arg1 Version:(unsigned long)arg2 Key:(id)arg3;
- (id)getNewTipsConfigWithTipsId:(unsigned long)arg1;
- (id)init;
- (void)loadTipsConfig;
- (void)registerNewTipsCenter;

@end

