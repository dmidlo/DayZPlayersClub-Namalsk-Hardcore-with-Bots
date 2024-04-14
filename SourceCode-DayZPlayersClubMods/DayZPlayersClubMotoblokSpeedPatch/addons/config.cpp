class CfgPatches
{
	class HC_MotoblockSpeedPatch
	{
		units[]=
		{
			"Motoblok_Base"
		};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class CfgSlots
{
	class Slot_Motoblok_WoodenPlanks
	{
		stackMax = 40;
	};
	class Slot_Motoblok_MetalSheets
	{
		stackMax = 20;
	};
};
class CfgVehicles
{
	class CarScript;
	class Motoblok_Base: CarScript
	{
		fuelCapacity = 18;
		fuelConsumption = 7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
				};
			};
		};
		class Chargo
		{
			itemsCargoSize[] = {10,40};
			openable = 1;
		};
		class SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=45; // Increased the maximum steering angle to make it more responsive in off-road conditions.
				increaseSpeed[]={0,30,20,10,50,3}; // Decreased the values to slow down the rate of steering response at higher speeds, making it feel more like a tractor and less agile at high speed.
				decreaseSpeed[]={0,60,45,30,70,15}; // Adjusted the values to slow down the rate at which steering returns to center. This makes the handling less twitchy, more suited for off-road navigation.
				centeringSpeed[]={0,0,10,20,40,30,80,50}; // Modified to decrease the speed at which the steering centers itself, allowing for more controlled and deliberate steering adjustments when navigating through difficult terrain.
			};
			class Throttle
			{
				reactionTime=0.30000001; // How quickly the throttle responds to input, kept unchanged for realistic response
				defaultThrust=0.3; // Lowered from 0.5 to reduce overall acceleration, making the vehicle less powerful
				gentleThrust=0.1; // Reduced from 0.2 for softer acceleration, aiding in off-road control
				turboCoef=1; // Reduced from 1.1 to eliminate turbo effect, aligning closer to a tractor's performance
				gentleCoef=0.5; // Unchanged, maintains the balance between gentle and aggressive acceleration
			};
			class Brake
			{
				// Adjusted pressure by speed for a maximum speed of around 45kph, ensuring gradual braking up to that speed
				pressureBySpeed[]={0,0.85,10,0.7,20,0.5,30,0.4,45,0.3}; // Reduced top speed to 45kph
				reactionTime=0.30000001; // Retained original reaction time for realism
				driverless=0.1; // Retained original value for consistency
			};
			class Aerodynamics
			{
				frontalArea=2.5; // Increased frontal area to simulate a more tractor-like shape, causing more drag
				dragCoefficient=0.8; // Increased drag coefficient to reflect the less aerodynamic shape of a tractor
			};
			drive="DRIVE_AWD";
			class Engine
			{
				// Modifying the torque curve to simulate a weaker tractor engine. 
                // The original torque values are reduced to lower the overall power output,
                // which helps in achieving a top speed closer to 45kph instead of 140kph.
                // Adjusted values simulate the engine's performance curve, peaking at lower RPMs,
                // and dropping off more quickly to reflect the limited power band of a tractor engine.
				torqueCurve[]={525,0,800,200,1000,250,2000,284,2600,216,3000,0}; 

				inertia=0.2; // Keeping the inertia the same to maintain engine response characteristic.
				frictionTorque=90; // Unchanged to preserve engine braking effect.
				rollingFriction=0.69999999; // Unchanged, as it mainly affects coasting behavior.
				viscousFriction=1; // Unchanged, maintains the engine's resistance to speed change.
				rpmIdle=800; // Idle RPM unchanged to keep engine running smoothly at standstill.
				rpmMin=1000; // Minimum RPM unchanged to ensure the vehicle can move from a stop effectively.
				rpmClutch=1200; // Lowered clutch engagement RPM to reflect the tractor's lower operating range.
				rpmRedline=3000; // Significantly reduced redline RPM to match the typical maximum operational speed of a tractor engine.
			};
			class Clutch
			{
				maxTorqueTransfer=650; // Unchanged, ensures that the clutch can handle the engine's torque
				uncoupleTime=0.2; // Unchanged, time to disengage the clutch remains the same for realism
				coupleTime=0.1; // Unchanged, time to engage the clutch remains the same for realism
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=2.0799999;
				// Adjusting gear ratios to decrease top speed and increase power at lower speeds, suitable for tractor-like performance.
				ratios[]={4.5,2.5,1.5,0.75}; // Higher ratios for lower gears to limit top speed to 45kph and improve torque for uphill and rough terrain.
				// This adjustment makes the first and second gears more powerful for climbing and towing, while the third and fourth gears allow for a smoother but limited top speed driving experience.
			};
			class CentralDifferential
			{
				ratio=2.1210001; // This value is fine for providing the differential lock needed for offroad capability.
				type="DIFFERENTIAL_LOCKED"; // Keeps both wheels spinning at the same speed, good for offroad but limiting for high-speed or smooth driving.
			};
			class Axles
			{
				class Front
				{
					maxBrakeTorque=2000; // Unchanged, provides adequate stopping power
					maxHandbrakeTorque=2500; // Unchanged, for emergency stops and parking on inclines
					wheelHubMass=5; // Unchanged, contributes to the vehicle's overall weight distribution
					wheelHubRadius=0.15000001; // Unchanged, affects the vehicle's ground clearance and ability to navigate rough terrain
					// The Differential settings are modified to reflect a locked differential typical of off-road vehicles, enhancing traction
					class Differential
					{
						ratio=3.73; // Increased ratio for better torque at lower speeds, aiding in off-road capabilities
						type="DIFFERENTIAL_LOCKED"; // Ensures both wheels turn at the same speed, improving traction in uneven terrain
					};
					// Suspension adjustments to accommodate rough terrain and improve handling
					class Suspension
					{
						stiffness=31400; // Adjusted to provide a balance between comfort and handling
						compression=1400; // Tuned for better shock absorption on rough terrain
						damping=6500; // Increased damping for better control over bumps and jumps
						travelMaxUp=0.15; // Increased upward travel to absorb larger bumps
						travelMaxDown=0.15; // Increased downward travel for better wheel articulation
					};
				};
				class Rear
				{
					maxBrakeTorque=1000; // Reduced for the rear to balance braking with the front, preventing oversteer
					maxHandbrakeTorque=2500; // Unchanged, for effective parking and emergency maneuvers
					wheelHubMass=5; // Unchanged, maintains vehicle balance
					wheelHubRadius=0.15000001; // Unchanged, keeps consistent ground clearance
					// The Differential settings adjusted for better off-road performance and traction
					class Differential
					{
						ratio=3.73; // Increased for improved power delivery at low speeds on steep terrain
						type="DIFFERENTIAL_LOCKED"; // Locked differential for enhanced traction in off-road conditions
					};
					// Rear suspension tweaks for improved off-road performance and durability
					class Suspension
					{
						stiffness=31400; // Tuned for a balance between handling and comfort on uneven surfaces
						compression=1400; // Adjusted for shock absorption on challenging terrains
						damping=6500; // Optimized for control and stability over rough paths
						travelMaxUp=0.15; // Increased to allow for larger obstacles
						travelMaxDown=0.15; // Enhanced for better contact with the ground in uneven terrain
					};
				};
			};
		}
	}
};