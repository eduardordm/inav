#ifndef GPLISTENER_H
#define GPLISTENER_H

#include <QObject>
#include "gpsentence.h"

class GpListener : public QObject
{
public:
    GpListener();

   /* virtual void onGPAAM(GpSentence& sentence); // Waypoint Arrival Alarm
    virtual void onGPALM(GpSentence& sentence); // GPS Almanac Data
    virtual void onGPAPA(GpSentence& sentence); // Autopilot format "A"
    virtual void onGPAPB(GpSentence& sentence); // Autopilot format "B"
    virtual void onGPASD(GpSentence& sentence); // Autopilot System Data
    virtual void onGPBEC(GpSentence& sentence); // Bearing & Distance to Waypoint, Dead Reckoning
    virtual void onGPBOD(GpSentence& sentence); // Bearing, Origin to Destination
    virtual void onGPBWC(GpSentence& sentence); // Bearing & Distance to Waypoint, Great Circle
    virtual void onGPBWR(GpSentence& sentence); // Bearing & Distance to Waypoint, Rhumb Line
    virtual void onGPBWW(GpSentence& sentence); // Bearing, Waypoint to Waypoint
    virtual void onGPDBT(GpSentence& sentence); // Depth Below Transducer
    virtual void onGPDCN(GpSentence& sentence); // Decca Position
    virtual void onGPDPT(GpSentence& sentence); // Depth
    virtual void onGPFSI(GpSentence& sentence); // Frequency Set Information
    virtual void onGPGGA(GpSentence& sentence); // Global Positioning System Fix Data
    virtual void onGPGLC(GpSentence& sentence); // Geographic Position, Loran-C
    virtual void onGPGLL(GpSentence& sentence); // Geographic Position, Latitude/Longitude
    virtual void onGPGRS(GpSentence& sentence); // GPS Range Residuals
    virtual void onGPGSA(GpSentence& sentence); // GPS DOP and Active Satellites
    virtual void onGPGST(GpSentence& sentence); // GPS Pseudorange Noise Statistics
    virtual void onGPGSV(GpSentence& sentence); // GPS Satellites in View
    virtual void onGPGXA(GpSentence& sentence); // TRANSIT Position
    virtual void onGPHDG(GpSentence& sentence); // Heading, Deviation & Variation
    virtual void onGPHDT(GpSentence& sentence); // Heading, True
    virtual void onGPHSC(GpSentence& sentence); // Heading Steering Command
    virtual void onGPLCD(GpSentence& sentence); // Loran-C Signal Data
    virtual void onGPMSK(GpSentence& sentence); // Control for a Beacon Receiver
    virtual void onGPMSS(GpSentence& sentence); // Beacon Receiver Status
    virtual void onGPMTA(GpSentence& sentence); // Air Temperature (to be phased out)
    virtual void onGPMTW(GpSentence& sentence); // Water Temperature
    virtual void onGPMWD(GpSentence& sentence); // Wind Direction
    virtual void onGPMWV(GpSentence& sentence); // Wind Speed and Angle
    virtual void onGPOLN(GpSentence& sentence); // Omega Lane Numbers
    virtual void onGPOSD(GpSentence& sentence); // Own Ship Data
    virtual void onGPR00(GpSentence& sentence); // Waypoint active route (not standard)
    virtual void onGPRMA(GpSentence& sentence); // Recommended Minimum Specific Loran-C Data
    virtual void onGPRMB(GpSentence& sentence); // Recommended Minimum Navigation Information
    virtual void onGPRMC(GpSentence& sentence); // Recommended Minimum Specific GPS/TRANSIT Data
    virtual void onGPROT(GpSentence& sentence); // Rate of Turn
    virtual void onGPRPM(GpSentence& sentence); // Revolutions
    virtual void onGPRSA(GpSentence& sentence); // Rudder Sensor Angle
    virtual void onGPRSD(GpSentence& sentence); // RADAR System Data
    virtual void onGPRTE(GpSentence& sentence); // Routes
    virtual void onGPSFI(GpSentence& sentence); // Scanning Frequency Information
    virtual void onGPSTN(GpSentence& sentence); // Multiple Data ID
    virtual void onGPTRF(GpSentence& sentence); // TRANSIT Fix Data
    virtual void onGPTTM(GpSentence& sentence); // Tracked Target Message
    virtual void onGPVBW(GpSentence& sentence); // Dual Ground/Water Speed
    virtual void onGPVDR(GpSentence& sentence); // Set and Drift
    virtual void onGPVHW(GpSentence& sentence); // Water Speed and Heading
    virtual void onGPVLW(GpSentence& sentence); // Distance Traveled through the Water
    virtual void onGPVPW(GpSentence& sentence); // Speed, Measured Parallel to Wind
    virtual void onGPVTG(GpSentence& sentence); // Track Made Good and Ground Speed
    virtual void onGPWCV(GpSentence& sentence); // Waypoint Closure Velocity
    virtual void onGPWNC(GpSentence& sentence); // Distance, Waypoint to Waypoint
    virtual void onGPWPL(GpSentence& sentence); // Waypoint Location
    virtual void onGPXDR(GpSentence& sentence); // Transducer Measurements
    virtual void onGPXTE(GpSentence& sentence); // Cross-Track Error, Measured
    virtual void onGPXTR(GpSentence& sentence); // Cross-Track Error, Dead Reckoning
    virtual void onGPZDA(GpSentence& sentence); // UTC Date / Time and Local Time Zone Offset
    virtual void onGPZFO(GpSentence& sentence); // UTC & Time from Origin Waypoint
    virtual void onGPZTG(GpSentence& sentence); // UTC & Time to Destination Waypoint*/
};

#endif // GPLISTENER_H
