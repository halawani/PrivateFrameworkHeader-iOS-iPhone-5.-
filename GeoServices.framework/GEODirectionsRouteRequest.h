/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEODirectionsRouteRequest : GEODirectionsRequest  {
    unsigned short _providerID;
    unsigned int _transitIconSize;
    int _mapZoomLevel;
    unsigned int _maxRoutes;
    int _timezoneOffset;
    int _cachedIconVersion;
    NSMutableArray *_cachedIconIDs;
    NSString *_startPlaceToken;
    NSString *_endPlaceToken;
    NSMutableArray *_viaWaypoints;
}

@property unsigned short providerID;
@property unsigned int transitIconSize;
@property int mapZoomLevel;
@property unsigned int maxRoutes;
@property int timezoneOffset;
@property int cachedIconVersion;
@property(retain) NSMutableArray * cachedIconIDs;
@property(retain) NSString * startPlaceToken;
@property(retain) NSString * endPlaceToken;
@property(readonly) NSMutableArray * viaWaypoints;


- (Class)responseClass;
- (unsigned short)providerID;
- (unsigned int)transitIconSize;
- (int)timezoneOffset;
- (int)mapZoomLevel;
- (unsigned int)maxRoutes;
- (id)endPlaceToken;
- (id)startPlaceToken;
- (id)viaWaypoints;
- (void)addViaWaypoint:(id)arg1;
- (id)cachedIconIDs;
- (int)cachedIconVersion;
- (void)setCachedIconVersion:(int)arg1;
- (void)setEndPlaceToken:(id)arg1;
- (void)setStartPlaceToken:(id)arg1;
- (void)setCachedIconIDs:(id)arg1;
- (void)setMaxRoutes:(unsigned int)arg1;
- (void)setMapZoomLevel:(int)arg1;
- (void)setTransitIconSize:(unsigned int)arg1;
- (void)setTimezoneOffset:(int)arg1;
- (void)setProviderID:(unsigned short)arg1;
- (id)init;
- (void)dealloc;
- (id)calendarDate;

@end
