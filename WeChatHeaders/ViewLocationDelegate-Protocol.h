//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, FavoritesItemDataField, MMUIViewController, NSString;

@protocol ViewLocationDelegate <NSObject>

@optional
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned long)arg4 FavIndex:(unsigned long)arg5;
- (void)onShareLocationMsgToOpenSDK:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
@end
