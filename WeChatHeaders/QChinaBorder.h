//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QChinaBorder : NSObject
{
    struct CGPath *chinaBorderPath;
    struct CGPath *mainlandPath;
    struct CGRect chinaBorderMBR;
    struct CGPoint *points;
    int nPoints;
    int _version;
}

+ (id)instance;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)dealloc;
- (id)init;
- (BOOL)updateData:(id)arg1 version:(int)arg2;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D)arg1 andRect:(CDStruct_02837cd9)arg2;
- (BOOL)internalContainsCoordinate:(struct CLLocationCoordinate2D)arg1 in:(struct CGPath *)arg2;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (BOOL)mainlandContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CGPath *)mainlandPath;
- (void)downloadNewData:(id)arg1;
- (id)readChinaBorder;
- (id)filePath;
- (struct CGPath *)constructChinaBorderPath:(id)arg1;
- (struct CGPath *)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;

@end

