//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface WCNewShareCardLayoutCacheItem : MMObject <PBCoding>
{
    BOOL entryShowNew;
    BOOL entryShowRedDot;
    NSMutableArray *localCityList;
    NSMutableArray *otherCityList;
    NSString *cityName;
    unsigned long lastUpdateTime;
    NSString *entryTip;
    NSMutableArray *entryIcons;
}

+ (void)initialize;
@property(nonatomic) BOOL entryShowRedDot; // @synthesize entryShowRedDot;
@property(nonatomic) BOOL entryShowNew; // @synthesize entryShowNew;
@property(retain, nonatomic) NSMutableArray *entryIcons; // @synthesize entryIcons;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip;
@property(nonatomic) unsigned long lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName;
@property(retain, nonatomic) NSMutableArray *otherCityList; // @synthesize otherCityList;
@property(retain, nonatomic) NSMutableArray *localCityList; // @synthesize localCityList;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

