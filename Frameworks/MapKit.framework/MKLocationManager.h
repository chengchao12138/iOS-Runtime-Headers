/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSBundle, NSHashTable, CLLocation, <MKLocationProvider>, NSTimer, GEOLocationShiftFunctionResponse, CLHeading, GEOLocation, <MKLocationRecorder>, GEOLocationShiftFunctionRequest;

@interface MKLocationManager : NSObject <MKLocationProviderDelegate> {
    BOOL _airplaneModeEnabled;
    BOOL _airplaneModeEnabledIsValid;
    struct __SCPreferences { } *_airplaneModePrefs;
    BOOL _allowUpdateCoalescing;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    BOOL _chinaShiftEnabled;
    NSTimer *_coalesceTimer;
    int _consecutiveOutOfCourseCount;
    BOOL _continuedAfterBecomingInactive;
    BOOL _continuesWhileInactive;
    CLLocation *_delayedLocationToShift;
    BOOL _enabled;
    BOOL _hasCheckedChinaShiftEnabled;
    CLHeading *_heading;
    NSHashTable *_headingObservers;
    double _headingUpdateTime;
    BOOL _isLastLocationStale;
    BOOL _isRequestingShiftFunction;
    BOOL _isTrafficHarvestingEnabled;
    BOOL _isTrafficHarvestingEnabledValid;
    double _lastKnownNavCourse;
    CLLocation *_lastLocation;
    BOOL _lastLocationPushed;
    double _lastLocationReportTime;
    double _lastLocationUpdateTime;
    double _locationAccuracyUpdateTime;
    id _locationCorrector;
    NSHashTable *_locationListeners;
    NSHashTable *_locationObservers;
    <MKLocationProvider> *_locationProvider;
    <MKLocationRecorder> *_locationRecorder;
    BOOL _logStartStopLocationUpdates;
    double _navCourse;
    id _networkActivity;
    GEOLocationShiftFunctionResponse *_shiftFunction;
    int _shiftProvider;
    GEOLocationShiftFunctionRequest *_shiftRequest;
    int _staleWiFiStatus;
    CLHeading *_throttledHeading;
    BOOL _trackingHeading;
    BOOL _trackingLocation;
    BOOL _useCourseForHeading;
    int _wiFiStatus;
}

@property int activityType;
@property BOOL allowUpdateCoalescing;
@property BOOL chinaShiftEnabled;
@property BOOL continuesWhileInactive;
@property(readonly) GEOLocation * courseCorrectedLocation;
@property(readonly) GEOLocation * currentLocation;
@property(retain) CLLocation * delayedLocationToShift;
@property double desiredAccuracy;
@property double distanceFilter;
@property(retain) NSBundle * effectiveBundle;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) GEOLocation * gridSnappedCurrentLocation;
@property(readonly) BOOL hasLocation;
@property(readonly) CLHeading * heading;
@property int headingOrientation;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) BOOL isAirplaneModeBlockingLocation;
@property(readonly) BOOL isHeadingServicesAvailable;
@property(readonly) BOOL isLastLocationStale;
@property(readonly) BOOL isLocationServicesApproved;
@property(readonly) BOOL isLocationServicesAvailable;
@property(readonly) BOOL isLocationServicesDenied;
@property(readonly) BOOL isLocationServicesEnabled;
@property(readonly) BOOL isLocationServicesPossiblyAvailable;
@property(readonly) BOOL isLocationServicesRestricted;
@property(readonly) BOOL isTrafficHarvestingEnabled;
@property(readonly) BOOL isWiFiEnabled;
@property(readonly) CLLocation * lastLocation;
@property(getter=wasLastLocationPushed,readonly) BOOL lastLocationPushed;
@property(readonly) int lastLocationSource;
@property(copy) id locationCorrector;
@property(retain) <MKLocationProvider> * locationProvider;
@property(retain) <MKLocationRecorder> * locationRecorder;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property BOOL logStartStopLocationUpdates;
@property(readonly) double navigationCourse;
@property(copy) id networkActivity;
@property(retain) GEOLocationShiftFunctionResponse * shiftFunction;
@property(retain) GEOLocationShiftFunctionRequest * shiftRequest;
@property(retain) CLHeading * throttledHeading;
@property BOOL useCourseForHeading;

+ (void)setConsidersWiFiInAirplaneMode:(BOOL)arg1;
+ (id)sharedLocationManager;

- (void)_airplaneModeChanged;
- (id)_applyChinaLocationShift:(id)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (BOOL)_isTimeToResetOnResume;
- (void)_refreshAirplaneMode;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setTrackingHeading:(BOOL)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (void)_stopCoalescingUpdates;
- (void)_suspend;
- (void)_syncLocationProviderWithTracking;
- (void)_updateWifiEnabled;
- (void)_useCoreLocationProvider;
- (int)activityType;
- (BOOL)allowUpdateCoalescing;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (BOOL)chinaShiftEnabled;
- (BOOL)continuesWhileInactive;
- (id)courseCorrectedLocation;
- (id)currentLocation;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (void)dealloc;
- (id)delayedLocationToShift;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (double)expectedGpsUpdateInterval;
- (id)gridSnappedCurrentLocation;
- (BOOL)hasLocation;
- (id)heading;
- (int)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (BOOL)isAirplaneModeBlockingLocation;
- (BOOL)isEnabled;
- (BOOL)isHeadingServicesAvailable;
- (BOOL)isLastLocationStale;
- (BOOL)isLocationServicesApproved;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesDenied;
- (BOOL)isLocationServicesEnabled;
- (BOOL)isLocationServicesPossiblyAvailable:(id*)arg1;
- (BOOL)isLocationServicesPossiblyAvailable;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isLocationServicesRestricted;
- (BOOL)isTrafficHarvestingEnabled;
- (BOOL)isWiFiEnabled;
- (id)lastLocation;
- (int)lastLocationSource;
- (void)listenForLocationUpdates:(id)arg1;
- (id)locationCorrector;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (id)locationProvider;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (BOOL)logStartStopLocationUpdates;
- (double)navigationCourse;
- (id)networkActivity;
- (void)pushLocation:(id)arg1;
- (void)reportCoalescedUpdated;
- (void)requestShiftFunctionForLocation:(id)arg1 wrap:(BOOL)arg2;
- (void)reset;
- (void)setActivityType:(int)arg1;
- (void)setAllowUpdateCoalescing:(BOOL)arg1;
- (void)setChinaShiftEnabled:(BOOL)arg1;
- (void)setCoalesceTimer:(id)arg1;
- (void)setContinuesWhileInactive:(BOOL)arg1;
- (void)setDelayedLocationToShift:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setLogStartStopLocationUpdates:(BOOL)arg1;
- (void)setNetworkActivity:(id)arg1;
- (void)setShiftFunction:(id)arg1;
- (void)setShiftRequest:(id)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setUseCourseForHeading:(BOOL)arg1;
- (id)shiftFunction;
- (id)shiftRequest;
- (BOOL)shouldCoalesceUpdates;
- (BOOL)shouldStartCoalescingLocation:(id)arg1;
- (BOOL)shouldStopCoalescingLocation:(id)arg1;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (id)throttledHeading;
- (BOOL)useCourseForHeading;
- (BOOL)wasLastLocationPushed;
- (void)wiFiStatusChanged:(id)arg1;

@end