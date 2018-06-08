//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ChatBackgroundSettings : NSObject
{
    NSMutableArray *items;
    NSMutableDictionary *backgroundPreferences;
    int currentCID;
    int lastSyncListDate;
}

@property(nonatomic) int lastSyncListDate; // @synthesize lastSyncListDate;
@property(nonatomic) int currentCID; // @synthesize currentCID;
@property(retain, nonatomic) NSMutableDictionary *backgroundPreferences; // @synthesize backgroundPreferences;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)keyPaths;
- (unsigned int)countOfItems;
- (id)getDefaultBackgroundItem;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getChatBackgroundItemByCID:(int)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithDefault;

@end
