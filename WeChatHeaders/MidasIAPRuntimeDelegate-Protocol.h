//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol MidasIAPRuntimeDelegate
- (BOOL)hasClassBeenHooked:(NSString *)arg1 selector:(NSString *)arg2;
- (NSString *)localizedStringOfStringId:(NSString *)arg1;
- (void)onLogOutput:(NSString *)arg1;
- (BOOL)isProductIdShouldIgnoredByMidas:(NSString *)arg1;
- (void)onReprovidingAfterInitialize;
@end
