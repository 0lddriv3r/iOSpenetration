//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAnnotation.h"

@class CLHeading, CLLocation, NSString;

@interface QUserLocation : NSObject <QAnnotation>
{
    BOOL _updating;
    CLLocation *_location;
    CLHeading *_heading;
    NSString *_title;
    NSString *_subtitle;
    struct CLLocationCoordinate2D _coordinate;
}

+ (struct CLLocationCoordinate2D)gcg02FromWGS84:(struct CLLocationCoordinate2D)arg1;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

