//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol FTSTopHitDelegate <NSObject>

@optional
- (BOOL)isTopHitFeatureReady;
- (void)sortFeatures:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getFeatureDictionary;
- (BOOL)isTopHitContactActive:(NSString *)arg1;
- (BOOL)isTopHitAddressBookReady;
- (BOOL)isTopHitContactReady;
- (void)sortAddressBookFriends:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (void)sortContacts:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getNickNameToFriendsDictionary;
- (NSMutableDictionary *)getAddressBookDictionary;
- (NSMutableDictionary *)getContactDictionary;
- (NSMutableDictionary *)getChinesePinyin;
- (unsigned long)getCreateTimeForUser:(NSString *)arg1;
@end

