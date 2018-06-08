//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KSSongInfo : NSObject
{
    BOOL _localFile;
    NSString *_artist;
    NSString *_title;
    NSString *_songURL;
    NSString *_songName;
    NSString *_fileVid;
    NSString *_fileExtension;
    unsigned long _databytesPerSecond;
    double _durion;
    long long _fileSize;
}

@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) double durion; // @synthesize durion=_durion;
@property(nonatomic) unsigned long databytesPerSecond; // @synthesize databytesPerSecond=_databytesPerSecond;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSString *fileVid; // @synthesize fileVid=_fileVid;
@property(nonatomic) BOOL localFile; // @synthesize localFile=_localFile;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songURL; // @synthesize songURL=_songURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)description;

@end

