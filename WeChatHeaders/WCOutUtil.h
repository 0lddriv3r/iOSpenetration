//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCOutUtil : NSObject
{
}

+ (void)showAlert:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;
+ (id)wordingForPhoneLable:(id)arg1;
+ (id)genLastCallContactsCallTime:(unsigned long)arg1;
+ (id)formatTime:(unsigned long)arg1;
+ (id)formatPhoneNum:(id)arg1;
+ (id)getWCOutPackageVersionPathForTid:(id)arg1;
+ (id)getWCOutPackageFilePathForTid:(id)arg1;
+ (id)getWCOutPackageDirPathForTid:(id)arg1;
+ (id)getWCoutCouponResponseCachePath;
+ (id)getWCOutPackagePath;
+ (id)getWCOutDBPath;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;

@end
