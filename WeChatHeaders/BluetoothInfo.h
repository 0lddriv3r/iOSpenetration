//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface BluetoothInfo : MMObject
{
    unsigned int _uploadTimeInterval;
    NSString *_peripheralName;
}

@property(retain, nonatomic) NSString *peripheralName; // @synthesize peripheralName=_peripheralName;
@property(nonatomic) unsigned int uploadTimeInterval; // @synthesize uploadTimeInterval=_uploadTimeInterval;
- (void).cxx_destruct;
- (void)dealloc;

@end

