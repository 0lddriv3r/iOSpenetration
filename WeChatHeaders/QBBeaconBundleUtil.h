//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBBeaconBundleUtil : NSObject
{
}

+ (BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (id)getBundleShortVer;
+ (id)getBundleVersion;
+ (id)getBundleId;
+ (id)getQimei;
+ (BOOL)saveQimei:(id)arg1;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;

@end

